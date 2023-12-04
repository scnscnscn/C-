#include <stdio.h>

int main() {
    int n[10]; 
    for (int i = 0; i <= 9; i++) {
        n[i] = 0; 
    }

    
    for (int i = 9; i >= 0; i--) {
        printf("%d ", n[i]);
    }

    return 0;
}
