#include <stdio.h>

int main(void) {
    long int M, N, i, num;
    int cnt[10] = {0}; // 统计0-9的出现次数，初始化为0

    scanf("%ld %ld", &M, &N); // 注意：M和N是long int，需用%ld

    // 遍历区间[M, N]的每个整数
    for (i = M; i <= N; i++) {
        num = i; // 临时存储当前数字，避免修改i
        // 处理num的每一位（包括0和个位数）
        do {
            int digit = num % 10; // 取末位数字
            cnt[digit]++;         // 对应数字计数+1
            num /= 10;            // 移除末位
        } while (num != 0); // 当num为0时停止（处理完所有位）
    }

    // 输出0-9的统计结果
    for (int n = 0; n < 10; n++) {
        printf("%d ", cnt[n]);
    }
    return 0;
}

