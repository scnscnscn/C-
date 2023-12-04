#include <stdio.h>

int main() 
{
    for (int x = 1; x <= 9; x++) 
    {
        for (int y = 1; y <= 9; y++) 
        {
            int z = x * y;
            printf("%5d ", z);
        }
        printf("\n");
    }
    return 0;
}
