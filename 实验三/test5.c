#include <string.h>
#include <stdio.h>

int main() {
    char c[100], s[] = "abcde";
    strcat(c,s);
    printf("%s",c);
    return 0;
}