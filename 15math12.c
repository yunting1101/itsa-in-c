#include<stdio.h>
#include<math.h>
int main(){
    float m = 0, ans = 0;
    while(scanf("%f", &m)!=EOF){
        ans = (m*100)/23.8;
        printf("%.0f\n",ceil(ans));
    }
}