#include <stdio.h>

int main() {
    char a[]="happy";
    char b[]="sad";
    int length=0;
    int i = 0,j=0;

    for (; a[i]!='\0'; i++);
    for (; b[j]!='\0'; j++);

    if (i>j)
    {
        printf("a is bigger");
    }else if (i=j)
    {
        printf("a is equal to b");
    }else{
        printf("b is bigger");
    }
   
    return 0;
    
}
