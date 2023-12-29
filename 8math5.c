#include<stdio.h>
#include<math.h>
int main(){
    double width;

    while(scanf("%lf",&width)!=EOF){
        printf("%.1f\n", round(width*width*10)/10.0);
    }
}