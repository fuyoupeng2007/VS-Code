#include <stdio.h>

int main() {
    int n, i, j, cnt1,cnt2;
    scanf("%d", &n);
    cnt1 = 1;
	cnt2 = 1; // 初始化计数器（从1开始）

    // 1. 打印正方形矩阵（n行n列，每行n个数字）
    for (i = 0; i < n; i++) { // 控制行数（0到n-1，共n行）
        for (j = 0; j < n; j++) { // 控制每行数字个数（n个）
            printf("%02d", cnt1); // %02d确保两位数，不足补0
            cnt1++;
        }
        printf("\n"); // 每行结束换行
    }

    // 空行分隔正方形和三角形
    printf("\n");

    // 2. 打印三角形矩阵（n行，第i行有i+1个数字）
    for (i = 0; i < n; i++) { // 控制行数（0到n-1，共n行）
        // 2.1 打印前置空格：第i行需要 2*(n-1 - i) 个空格（每行减少2个空格）
        for (j = 0; j < 2 * (n - 1 - i); j++) {
            printf(" ");
        }
        // 2.2 打印数字：第i行有 i+1 个数字，延续正方形的计数
        for (j = 0; j < i + 1; j++) {
            printf("%02d", cnt2);
            cnt2++;
        }
        printf("\n"); // 每行结束换行
    }

    return 0;
}

