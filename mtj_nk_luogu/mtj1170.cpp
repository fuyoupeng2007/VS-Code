#include <stdio.h>

int main() { 
    int a, sum;
    scanf("%d", &a);  // 输入原始数字
    int original = a;  // 保存原始值（可选，用于调试）

    // 第1步：累加原始数字的各位
    sum = 0;  // 必须初始化！
    while (a > 0) {  // 循环剥离各位并累加
        sum += a % 10;  // 累加个位
        a = a / 10;     // 去除个位
    }

    // 第2步：若和≥10，继续累加和的各位（直到结果为个位数）
    while (sum >= 10) {
        int temp = sum;  // 临时存储当前和
        sum = 0;         // 重置sum，计算新的各位之和
        while (temp > 0) {
            sum += temp % 10;
            temp = temp / 10;
        }
    }

// 第3步：判断最终结果是否为1
    if (sum == 1) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0; 
}

