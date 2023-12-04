#include <stdio.h>

int main() {
    char a[]="happy";
    int length=0;
    int i = 0;

    for (; a[i]!='\0'; i++);
    
    printf("%d",i);
    
}
