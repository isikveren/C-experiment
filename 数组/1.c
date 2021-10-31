#include <stdio.h>
#define N 5
int main(){
    int i, a[N];
    for(i = 0;i < N;i++){
        a[i] = i*2;
    }
    for(i = 0;i < N;i++){
        printf("%d",a[i]);
    }
    return 0;
}