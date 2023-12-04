#include <stdio.h>
#include <string.h>

int main() {
    char name[5][50]; //二维数组存储国家名字

    printf("用英语输入五个国家的名字：\n");

    for (int i = 0; i < 5; i++) {
        scanf("%s", name[i]);
        for (int j = 0; j < i; j++) {
            if (strcmp(name[i], name[j]) == 0) {
                printf("不要输入相同的名字\n");
                return 1; // 退出程序，因为已经有重复的名字
            }
        }
    }

    // 对名字进行排序
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (strcmp(name[i], name[j]) > 0) {
                char temp[50];
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("排序后的国家名字：\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}
