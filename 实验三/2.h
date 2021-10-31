#include <stdio.h>
#include <string.h>
#define N 100

void delc(char c[],char x){
    int n = strlen(c), count = 0,i;
    for(i = 0;i < n;i++){
            c[count++] = c[i];
        if(c[i] == x && c[i + 1] != x){
            break;
        }
    }
    for(;i < n;i++){
        if(c[i] == x){
            continue;
        }
        c[count++] = c[i];
    }
    c[count] = '\0';
}