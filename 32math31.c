#include<stdio.h>
int main(){
    int a = 0,sum = 0;;
    scanf("%d",&a);
    for(int i=1; i<=a; i++){
        if(i%6 == 0 && i%12!=0){
            sum+=i;
        }
    }
    printf("%d\n",sum);
}