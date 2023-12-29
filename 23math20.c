#include<stdio.h>
int main(){
    int a = 0;
    while(scanf("%d", &a)!=EOF){
        printf("%X\n", a);
    }
}