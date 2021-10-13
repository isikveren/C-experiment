//从键盘输入三个整数，统计其中正整数的累加和及个数。
//程序中存在有错误，调试程序并运行得到正确的结果。
//调试程序时不要增减程序中变量的定义，不要改变程序中变量的数据类型。
//程序中的错误有可能是物理性的语法错误，也有可能是逻辑性的设计错误。
#include<stdio.h>
int main()
{
    int a, b, c, sum=0, n=0;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    if(a>0) sum+=a; n++;
    if(b>0) sum+=b; n++;
    if(c>0) sum+=c; n++;
    printf("有%d个正整数，累加和是：%d\n",n,sum);
    return 0;
}
