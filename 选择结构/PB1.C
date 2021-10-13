//程序中存在有错误，调试程序并运行得到正确的结果。
//调试程序时不要增减程序中变量的定义，不要改变程序中变量的数据类型。
//程序中的错误有可能是物理性的语法错误，也有可能是逻辑性的设计错误。
#include<stdio.h>
int main()
{
    int s = 0, x;
    printf("x=");
    scanf("%d",&x);
    switch(x)
    {
        case 0:s+=3; break;
        case 3:s++;
        case 5:s*=2; break;
        case 7:s-=1;
        default: s+=5;
    }
    printf("%d\n",s);
    return 0;
}
