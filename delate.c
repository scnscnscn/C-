#include <stdio.h>
#include <string.h>
int main (){
    char s[50];
    char c;
    
    gets(s);//读取用户输入的字符串
    c = getchar();//读取要删除的单个字符
    int i,j;
    for(i = 0,j = 0;s[i] != '\0';i++){
        if(s[i] ==c)
          continue;
        s[j] = s[i];
        j++;
    }
    s[j] = '\0';

    printf("%s",s);

    return 0;
}