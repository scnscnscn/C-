#include <stdio.h>

int main() 
{
    for (int x = 1; x <= 9; x++) 
    {
        for (int y = 1; y <= 9; y++) 
        {   
            if (x + y >= 10)
            {
                int z = x * y;
                printf("%5d ", z);
            }
            else
            {
                printf("      "); 
            }
        }
        printf("\n");
    }
    return 0;
}
