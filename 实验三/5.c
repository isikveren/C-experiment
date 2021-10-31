#include <stdio.h>
#include <string.h>
void F10(char *s, char *t) {
    int i, n = strlen(s), count;
    strcpy(t, s);
    // for(i = 0; t[i] != '\0';i++){
    //     printf("%d %c",i,t[i]);
    // }
    count = n;
    // printf("%d",n - 1);
    // printf("%d",count);
    for(i = n - 1; i >= 0; i--) {
        t[count++] = s[i];
    }
    t[count] = '\0';
    
}
int main() {
    char s[100], t[100];
    printf("输入原始字符串:");
    gets(s);
    F10(s, t);
    printf("新的字符串:\"%s\"\n",t);
    return 0;
}