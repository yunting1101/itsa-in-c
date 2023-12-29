#include<stdio.h>
int main(){
    int i =0;
    while(scanf("%d",&i)!=EOF){
        int ans = 1;
        if(i<31){
            for(int j=0; j<i; j++){
                ans*=2;
            }   
            printf("%d\n",ans);         
        }
        else{
            printf("Value of more than 31\n"); 
        }

    }
}