//实验一 第二题
#include <stdio.h>

int main(){
    printf("请输入四位数整数!");
    int num, a[4],temp;
    scanf("%d",&num);
    if(num / 1000 < 1){printf("输入的数字不符合要求！\n");}
    else{
        for(int i = 3;i>=0;i--){   //分离数字
            a[i] = num%10;
            num = num/10;
        }
        for(int i = 4;i > 0;i--){   //冒泡排序
            int flag = 0;
            for(int j = 0;j + 1 < i;j++){
                if(a[j] > a[j + 1]){
                    temp = a[j];   
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    flag++;
                }
            }
            if(flag == 0) break;
        }
        printf("排序后升序显示：");  //打印显示
        for(int i = 0;i < 4;i++){
        printf("\t%d,",a[i]);
    }
    printf("\n");
    int num2 = a[3]*10+a[0];      //合并数字
    printf("新组成的数字：%d\n",num2);
    }
    return 0;
}