//实验一 第七题
#include <stdio.h>

int main(){
    int num = 1;
    double sum = 0, div, div_up, div_down;
    while(1){

        div_up = 2 * num - 1;
        div_down = (2 * num) * (2 * num);
        div = div_up / div_down;
        sum += div;
        if(div <= 0.001) break;             //最后一项小于等于0.001时停止计算
        num++;
    }
       printf("n = %d, s = %lf\n",num,sum);
    return 0;
}