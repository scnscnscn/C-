#include <stdio.h>
int main(){
    int num,score,people,sum=0;
    
    printf("how many people are there in your class ");
    scanf("%d",&people);
    
    for (int n = 1; n <= people; n++)
    {
        printf("enter the number and the score");
        scanf("%d%d",&num,&score);
        
        if (n%10 == 3||n%3==0)//&&与，||或
        {
            continue;
        }
        
        if (num%2!=0)
        {
            sum+=score;
        }
        
    }
    
    printf("%d",sum);
    
    return 0;
    
}