#include<stdio.h>
int main(){
    int a = 0, check = 0;
    scanf("%d", &a);
    for(int i = 2 ; i < a ; i++){
        if(a%i == 0){
            check = 1;
        }
    }
    if(check == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
}