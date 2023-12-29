#include<stdio.h>
int main(){
    int x = 0, y = 0, dis = 0;
    scanf("%d %d", &x, &y);
    dis = x*x+y*y;
    if(dis<=10000 ){
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }

}