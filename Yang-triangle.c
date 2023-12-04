#include <stdio.h>

int main() {
    int n = 10;
    int a[10][10];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                a[i][j] = 1;
            } else {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }

    
    for (int i = 0; i < n; i++) {
        
        for (int k = 0; k < n - i; k++) {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++) {
            printf("%4d", a[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
