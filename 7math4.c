#include<stdio.h>
int main(){
    int a, b;

    while(scanf("%d %d",&a, &b)!=EOF){
        printf("%d+%d=%d\n", a,b,a+b);
        printf("%d*%d=%d\n", a,b,a*b);
        printf("%d-%d=%d\n", a,b,a-b);
        int c=a%b;
        if(c<0){
            printf("%d/%d=%d...%d\n", a,b,a/b-1,c+b);
        }
        else{
            printf("%d/%d=%d...%d\n", a,b,a/b,c);
        }
        
    }
}