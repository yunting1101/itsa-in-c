#include<stdio.h>
#include<math.h>
int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        double km = a * 1.6;
        printf("%.1f\n", round(km*10)/10.0);
    }
}