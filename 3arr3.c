#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[6], ans = 0;
    for(int i=0; i<6; i++){
        scanf("%d",&a[i]);
        ans +=(a[i]*a[i]*a[i]);
    }
    printf("%d\n", ans);

}