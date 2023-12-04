#include <stdio.h>

int main() {
    int n, space;

    printf("请输入金字塔的层数: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // 打印空格
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // 打印星号
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
