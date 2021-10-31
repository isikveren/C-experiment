#include "2.h"

int main(){
    char c[N],x;
    printf("输入字符串:\n");
    gets(c);
    printf("需要删除的字符是:\n");
    x = getchar();
    delc(c,x);
    printf("新字符串:");
    puts(c);
    return 0;

}