#include <stdio.h>
int main(){
    char s[1000];
    gets(s);

    int num = 0 ;
    char prev = '\0';
for (int i = 0; s[i] !='\0'; prev=s[i++])
{
    if (s[i] == ' ')
    {
        if (0 != i&& prev != ' ')
            num++;
        
    }
    
}

if (prev != ' ')
    num++;

printf("%d\n",num);
return 0;


}