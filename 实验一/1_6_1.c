//实验一 第六题第一小题
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
            if((count - 1) % 6 < 3){
                printf("%c",ch);
            }
            else{
                printf("%c",ch + 32);
            }
            if(count % 3 != 0){ 
                ch++;
            }  
            else{
                ch = ch - 2;
            }
            
        }
        printf("\n");
    }
    return 0;
}