#include<stdio.h>
int main(){
    int totsec = 0,s,m,h,d;
    scanf("%d",&totsec);
    d = totsec/86400;
    h = (totsec%86400)/3600;
    m = (totsec%3600)/60;
    s = totsec%60;
    printf("%d days\n",d);
    printf("%d hours\n",h);
    printf("%d minutes\n",m);
    printf("%d seconds\n",s);

}