#include <stdio.h>
int main(){
    int x,i;
    int result[8];
    scanf("%d",&x);
    _Bool isneg = (x<0);
    if(isneg)
        x=~x;
    for(i=0; i<8; i++){
        result[7-i]=x%2;
        x/=2;
    }
    if(isneg){
        for(i=0; i<8; i++){
            if(result[i]==0)
                result[i]=1;
            else
                result[i]=0;
        }
    }
    for(i=0; i<8; i++)
        printf("%d",result[i]);
    printf("\n");
}