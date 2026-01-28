#include <stdio.h>

int main() {
    int num;
    // 输入正整数 N
    scanf("%d", &num);
    int result = 0;
    int position = 1;

    // 处理每一位数字
    while (num > 0) {
        int digit = num % 10;
        // 如果当前位是 0，转换为 5
        if (digit == 0) {
            digit = 5;
        }
        // 重构数字
        result = result + digit * position;
        position *= 10;
        num = num / 10;
    }

    // 输出转换后的数
    printf("%d\n", result);
    return 0;
}

