//实验一 第一题
#include <stdio.h>

int main() {
    int num1,num2;
    printf("请输入两个数:\n第一个数:");
    scanf("%d",&num1);
    printf("第二个数:");
    scanf("%d",&num2);
    //第一种方法
    int tmp1 = num1,tmp2 = num2;

    tmp1 = tmp1 + tmp2;
    tmp2 = tmp1 - tmp2;
    tmp1 = tmp1 - tmp2;
    printf("第一种方法，交换后第一个数:%d 第二个数:%d\n",tmp1,tmp2);
    //第二种方法
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
    printf("第二种方法，交换后第一个数:%d 第二个数:%d\n",num1,num2);
    return 0;
}
