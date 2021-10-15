#include <stdio.h>
int is_runnian(int year){

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return 1;
            }
            else{
                return 0;
            }

        }
        else{
            return 1;
        }

    }
    else{
        return 0;
    }
}
int is_runnian2(int year){
    if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int year,leap;
    printf("请输入年份：");
    scanf("%d",&year);
    if(is_runnian2(year) == 1){
        printf("%d年是闰年",year);
    }
    else{
        printf("%d年不是闰年",year);
    }
    return 0;
}