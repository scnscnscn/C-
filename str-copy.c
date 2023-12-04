#include <stdio.h>
#include <string.h>

int main (){

    int l1 = strlen(s1);     
    int l2 = strlen(s2);

    int i,j;
    for(i = 0;i < 12;i++)
        s1[l1 + i] = s2[i];
    s1[l1+i] = '\0';
      
    printf("%d\t%d\n",l1,l2);//\t制表符，相当于八个空格 
      
    return 0;                  
}                                               