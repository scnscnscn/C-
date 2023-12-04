#include <stdio.h>

int main() {
    int arr[] = {1, 3, -5, -8, 9, 10, 11, -12};
    int n = 8; 
    
    int max_sum = arr[0];//这是用来存储数组的和的最大值的变量。
    int max_index = 0;//这个变量用来存储达到数组和的最大值时的元素位置。
    int current_sum = arr[0];//这是用来存储当前累积的和的变量。
    
    for (int i = 1; i < n; i++) {
        if (current_sum + arr[i] < arr[i]) {
            current_sum = arr[i];
        } else {
            current_sum += arr[i];
        }
        
        if (current_sum > max_sum) {
            max_sum = current_sum;
            max_index = i;
        }
    }
    
    printf("数组的和的最大值为: %d\n", max_sum);
    printf("最大值位于数组的第 %d 个元素\n", max_index + 1);
    
    return 0;
}
