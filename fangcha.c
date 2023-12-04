#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double data[100]; 

    printf("请输入学生成绩: ");
    scanf("%d", &n);
   
    for (int i = 0; i < n; i++) {
        scanf("%lf", &data[i]);
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += data[i];
    }
    double average = sum / n;

    double fangcha = 0.0;
    for (int i = 0; i < n; i++) {
        fangcha += (data[i] -average) * (data[i] - average);
    }
    fangcha /= n;

    printf("方差: %.2lf\n", fangcha);

    return 0;
}
