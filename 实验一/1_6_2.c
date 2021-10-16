//实验一 第六题第二小题
#include <stdio.h>
#define M 4
#define N 8

int main(){
    int i,j,k,count = 0;
    char ch = 'A';
    for(i = 1;i <= M;i++){
        for(j = 1;j < N - i;j++){
            printf(" ");
        }
        for(k = 1;k <= 2*i - 1;k++){
            count++;
            if(count % 2 == 0){
                printf("%c",ch + 32);
            }
            else{
                printf("%c",ch);
            }
            ch++;
        }
        printf("\n");
    }
    return 0;
}