//实验一 第五题
#include <stdio.h>
#include <math.h>

int main(){
    int num,order = 1,sum = 0;
    while(1){
        printf("请输入第%d个整数:",order++);
        scanf("%d",&num);
        if(num == 0 || sum >= 100) break;  
        
        int count = 0;                    //判断素数
        int k = sqrt((double)num);           
        for(int i = 2;i <= k;i++){        
            if(num % i == 0){
            count++;  
            }
        }
        if(count == 0 && num > 1){      
        sum += num;
        }
    }
    printf("素数的累加和是:%d\n",sum);
    return 0;
}