#include<stdio.h>
int main(){
    int a = 0, sum = 0;
    while(scanf("%d",&a)!=EOF){
        for(int i = 1 ; i <= a ; i++){
            if(i % 3 ==0){
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }
}