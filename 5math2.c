#include<stdio.h>
int main(){
    double down, hight;

    while(scanf("%lf %lf",&down, &hight)!=EOF){
        printf("%.1lf\n", down*hight/2);
    }
}