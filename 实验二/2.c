#include <stdio.h>
//421222199909027213
//1-6 7-14 15-18
int main(){
    char c[19];
    int i;
    scanf("%s",c);
    //printf("%s",c);
    printf("出生日期：");
    for(i = 6;i < 10;i++){
        printf("%c",c[i]);
    }
    printf("年");
    for(i = 10;i < 12;i++){
        printf("%c",c[i]);
    }
    printf("月");
    for(i = 12;i < 14;i++){
        printf("%c",c[i]);
    }
    printf("日");
    if((int)(c[16] - '0') % 2 == 0){
        printf("性别:女");
    }
    else {
        printf("性别:男");
    }

    printf("\n");
    return 0;
}