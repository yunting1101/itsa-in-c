#include<stdio.h>
int main(){
    int a = 0,b = 0;
    scanf("%d %d",&a,&b);
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i = a ; i >= 1 ; i--){
        if(b%i == 0 && a%i == 0){
            printf("%d\n",i);
            break;
        }
    }
}