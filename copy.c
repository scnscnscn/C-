#include <stdio.h>

int main() {
    char a[] = "hello";
    char b[] = "world";
    char result[15]; 

    int i, j;

    for (i = 0; a[i] != '\0'; i++) {
        result[i] = a[i];
    }

    for (j = 0; b[j] != '\0'; j++) {
        result[i + j] = b[j];
    }

    result[i + j] = '\0';

    printf("拼接后的字符串：%s\n", result);

    return 0;
}
