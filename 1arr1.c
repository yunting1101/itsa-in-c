#include <stdio.h>
#include<string.h>
int main(){
    char arr[105] = {0};
    while(gets(arr)){
        char *token[100] = {NULL};
        int c = 0;
        token[0] = strtok(arr, " \n"); 
        while(token[++c] = strtok(NULL, " \n"));
        for(int i = c-1 ; i >= 0 ; i--){
            if(i == 0){
                printf("%s\n", token[i]);
            }
            else{
                printf("%s ",token[i]);
            }
        }
    }
}