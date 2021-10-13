/*
  从键盘输入一个5位正整数，找出所有数字位上的最大值的数字。
  如输入35246，则显示：35246中最大的数字是6!
*/
//程序中存在有错误，调试程序并运行得到正确的结果。
//调试程序时不要增减程序中变量的定义，不要改变程序中变量的数据类型。
//程序中的错误有可能是物理性的语法错误，也有可能是逻辑性的设计错误。
#include <stdio.h>
#define N 5
int main()
{
    int x, a, b, c, d, e, max=10;
    printf("输入一个%d位正整数：",N);
    scanf("%d",&x);
    if(x<10000 && x>99999)
        printf("输入的数字不合理!\n");
    else
    {
        a=x/10000; b=x%10%10; c=x/100%10; d=x/10%10; e=x%10;
        printf("拆分的结果是：%d, %d, %d, %d, %d\n",a,b,c,d,e);
        if(max<a)
            max=a;
        if(max<b)
            max=b;
        if(max<c)
            max=c;
        if(max<d)
            max=d;
        if(max<e)
            max=e;
        printf("%d中最大的数字是%d!\n",x,max);
    }
    return 0;
}
