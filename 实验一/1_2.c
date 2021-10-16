//实验一 第二题
#include <stdio.h>

int main(){
    printf("请输入四位数整数!");
    int num, a,b,c,d;
    scanf("%d",&num);
    if(num / 1000 < 1 || num / 10000 > 0){
        printf("输入的数字不符合要求！\n");
        }
    else{
        //分离数字
        for(int i = 3;i >= 0;i--){   
            switch(i){
                case 0: a = num % 10; break;
                case 1: b = num % 10; break;
                case 2: c = num % 10; break;
                case 3: d = num % 10; break;
            }
            num /=10;
        }
        //冒泡排序
        if(a > b){
            a = a + b;
            b = a - b;
            a = a - b;
        }
        if(b > c){
            b = b + c;
            c = b - c;
            b = b - c;
        }
        if(c > d){
            c = c + d;
            d = c - d;
            c = c - d;
        }
        if(a > b){
            a = a + b;
            b = a - b;
            a = a - b;
        }
        if(b > c){
            b = b + c;
            c = b - c;
            b = b - c;
        }
        if(a > b){
            a = a + b;
            b = a - b;
            a = a - b;
        }
        printf("排序后升序显示：");
        printf("\t%d,\t%d,\t%d,\t%d",a,b,c,d);
        int num_new = d * 10 + a;
        printf("\n新组成的数字：%d\n",num_new);
    }
    return 0;
}