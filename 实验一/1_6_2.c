//实验一 第六题第二小题
#include <stdio.h>

int main(){
    char ch = 'A';
    int odd = 1,count_char = 1,count_blank = 3;
    for(int i = 1;i <= 16;i++){
        if(i == 1){
          for(int i2 = count_blank;i2 > 0;i2--){   //先在首行A前打印三个空格
              printf(" ");
          }
        }
        if(i % 2 == 0){                              //偶数位次转化成小写
            printf("%c",ch + 32);
        }
        else{
            printf("%c",ch); 
        }
        ch++;                                   
        if(i % count_char == 0){                     //打印回车键
            printf("\n");                       
            odd += 2;
            count_char += odd;
            count_blank--;
            for(int i2 = count_blank;i2 > 0;i2--){  //依次在剩余行首字母前打印空格
                printf(" ");
            }
        }
    }
    
    return 0;
}