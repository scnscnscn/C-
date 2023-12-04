#include <stdio.h>

int main() {
    int a[3][5] = {
        {80, 61, 59, 85, 76},
        {75, 65, 63, 87, 77},
        {92, 71, 70, 90, 85}
    };
   
    int ave1 = 0, ave2 = 0, ave3 = 0;
    
    for (int i = 0; i < 5; i++) {
        ave1 += a[0][i];//第一行
    }
    ave1 /= 5;
    
    printf("第1行的平均值：%d\n", ave1);
    
    for (int j = 0; j < 5; j++) {
        ave2 += a[1][j];//第二行
    }
    ave2 /= 5;
    
    printf("第2行的平均值：%d\n", ave2);
    
    for (int h = 0; h < 5; h++) {
        ave3 += a[2][h];//第三行
    }
    ave3 /= 5;
    
    printf("第3行的平均值：%d\n", ave3);
    
    return 0;
}
//for (int i = 0; i < 5; i++)
//   {
//      sum += a[0][i];
//      int ave1=sum/5;
//  }
//使用这种形式会导致ave每次值都会变，所以应该放在for外面  
   