#include <stdio.h>

int main() {
    int n=20;

    long long fib[n]; 

    
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("斐波那契数列的前20项是:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%lld ", fib[i]);
    }
    printf("\n");

    return 0;
}
