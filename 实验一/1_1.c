//实验一 第一题
#include <stdio.h>

int main() {
    int num1,num2;
    printf("请输入两个数:\n第一个数:");
    scanf("%d",&num1);
    printf("第二个数:");
    scanf("%d",&num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("交换后第一个数:%d 第二个数:%d\n",num1,num2);
    return 0;
}
