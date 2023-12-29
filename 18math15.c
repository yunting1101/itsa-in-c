#include<stdio.h>
int main(){
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    if(x<=100 && y<=100 && x>=0 && y>=0){
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }

}