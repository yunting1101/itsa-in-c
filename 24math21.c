#include<stdio.h>
#include<stdlib.h>
int main(){
    long long a;
    while(scanf("%lld", &a)!=EOF){
        long long sum = 1LL;
        for(int i = 1 ; i <= a ; i++){
            sum*=i;
        }
        printf("%lld\n",sum);
    }
}