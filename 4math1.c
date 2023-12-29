#include<stdio.h>
int main(){
    double up, down, hight;

    while(scanf("%lf %lf %lf",&up, &down, &hight)!=EOF){
        printf("Trapezoid area:%.1f\n", (up+down)*hight/2);
    }
}