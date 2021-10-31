#include<stdio.h>
 void f(){

     char c;
     c = getchar();
     putchar(c);
     if(c!='.'){
         f();
     }
     putchar(c);
 }
 int main(){
     printf("输入");
     f();
     return 0;
 }