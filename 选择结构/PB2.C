//设计随机显示一位数字式字符或字母字符的程序。
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int main()
{
    int a, b;
    char c;
    srand((unsigned)time(NULL));
    a=(int)rand()%2;
    if(a)
    {
        b=(int)rand()%2;
        if(b)
            c=(int)rand()%26+65;
        else
            c=(int)rand()%26+97;
    }
    else
        c=(int)rand()%10+32;
    printf("%c\n",c);
    return 0;
}
