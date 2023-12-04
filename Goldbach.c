#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter a number");
    int a,b;
    double m;
    
    scanf("%d",&a);
    
    for(int m=2;m <= sqrt(a);m++){
        b=a%m;
        if(b  != 0)
          continue;
        else 
          break;
    }
    
    if(b == 0)
      
      printf("no");
    
    else 
    
    {printf("yes");
    } 
      return 0;
}
