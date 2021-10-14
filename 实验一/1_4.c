//实验一 第四题
#include <stdio.h>

int main(){
    long int num,new_num = 0;
    printf("请输入一个长整数：");
    scanf("%ld",&num);
    int i = 1;
    while(num != 0){
        int tmp = num % 10;
        num /= 10;
        if(tmp % 2 == 0){
            new_num += tmp * i;
            i *= 10;
        }
    }
    printf("%ld\n",new_num);
    return 0;
}