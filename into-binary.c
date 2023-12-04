#include <stdio.h>

int main() {
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);

    printf("其二进制表示是: ");
    
    if (num == 0) {
        printf("0\n");
    } else {
        int binary[100]; 
        int i = 0;

        while (num > 0) {
            binary[i] = num % 2;
            num = num / 2;//进入二进制下一位计算
            i++;
        }
        //存储时为逆序存储，此时要将之顺序输出
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
        printf("\n");
    }

    return 0;
}
