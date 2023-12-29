#include<stdio.h>
int main(){
    int s = 0,t = 0;
    while(scanf("%d %d",&t, &s)!=EOF){
        double tot = 0;
        if(t <= 60){
            tot = s * t;
        }
        else if(t > 60 && t <= 120){
            tot = (60*s)+(t-60)*s*1.33;
        }
        else{
            tot=(60*s*2.33)+(t-120)*s*1.66;
        }
        printf("%.1f\n", tot);
    }
}