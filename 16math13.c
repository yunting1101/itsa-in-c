#include<stdio.h>
#include<math.h>
int main(){
    int m1 = 0, h1 = 0,m2 = 0, h2 = 0, time = 0,ans = 0;
    scanf("%d %d", &h1,&m1);
    scanf("%d %d", &h2,&m2);
    time = (h2-h1)*60+(m2-m1);
    if(time<=120 && time>=30){
        ans = (time/30)*30;
    }
    else if(time>120 && time<=240){
        ans = 120+((time-120)/30)*40;
    }
    else if(time>240){
        ans = 280+((time-240)/30)*60;
    }
    printf("%d\n", ans);
    
}