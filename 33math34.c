#include<stdio.h>
int main(){
    int a = 0;
    scanf("%d",&a);
    for(int i=1; i<=a; i++){
        if(a%i == 0){
            if(i ==1){
                printf("%d",i);
            }
            else{
                printf(" %d",i);
            }
        }
    }
    printf("\n");
    
}