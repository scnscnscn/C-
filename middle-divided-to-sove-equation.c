#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, r, fx1, fx2, fr, eps = 1e-5;

    do {
        printf("输入两个数字：");
        scanf("%f %f", &x1, &x2);

        fx1 = 2 * x1 * x1 * x1 - 4 * x1 * x1 + 3 * x1 - 6;
        fx2 = 2 * x2 * x2 * x2 - 4 * x2 * x2 + 3 * x2 - 6;
    } while ((fx1 * fx2) > 0);

    do {
        r = (x1 + x2) / 2;
        fr = 2 * r * r * r - 4 * r * r + 3 * r - 6;

        if (fx1 * fr > 0) {
            x1 = r;
            fx1 = fr;
        } else {
            x2 = r;
        }

        

    } while (fabs(fr) >= eps);

    printf("根=%.2f\n", r);

    return 0;
}
