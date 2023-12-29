#include<stdio.h>
int main(){
    int a = 0;
    scanf("%d",&a);
    if(a%4 == 0){
        if(a%400==0){
            printf("Bissextile Year\n");
        }
        else{
            printf("Common Year\n");
        }
        
    }
    else{
        printf("Common Year\n");
    }
    
}