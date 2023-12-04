#include <stdio.h>

int main() {
    int a[10], x, y, z, m;

    printf("输入数组中的数字:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("输入要查找的数字: ");
    scanf("%d", &x);

    y = 0;
    z = 9;

    while (y <= z) {
        m = (y + z) / 2;

        if (x == a[m]) {
            printf("找到了\n");
            return 0;
        } else if (x < a[m]) {
            z = m - 1;
        } else {
            y = m + 1;
        }
    }

    printf("找不到\n");
    return 0;
}
