#include <stdio.h>

int main() {
    long int nums[1000] = {0};  // 数组存储输入（假设最多1000个数字）
    int count = 0;              // 记录有效数字个数（不含0）
    long int num;               // 临时存储输入的数字

    // 读取输入，遇到0终止
    while (1) {
        scanf("%ld", &num);
        if (num == 0) {
            break;  // 输入0时停止读取
        }
        nums[count] = num;  // 存储非0数字
        count++;            // 有效数字个数+1
    }

    // 逆序输出（从最后一个有效数字到第一个）
    for (int i = count - 1; i >= 0; i--) {
        printf("%ld ", nums[i]);
    }
    printf("\n");  // 输出结束后换行

    return 0;
}

