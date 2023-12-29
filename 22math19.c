#include <stdio.h>
int main(){
    int m = 0;
    double money = 0;
    while(scanf("%d", &m)!=EOF){
        if(m <= 800){
            money = m * 0.9;
        }
        else if(m > 800 && m < 1500){
            money = (m * 0.9) * 0.9;
        }
        else{
            money = (m * 0.9) * 0.79;
        }
        printf("%.1f\n", money);
    }
}