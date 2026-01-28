#include<stdio.h>#include <stdio.h>

int main() {
    int arr[10];       // 原数组（10个元素）
    int new_arr[19];   // 新数组（10 + 9 = 19个元素）
    int *p_arr = arr;  // 指向原数组的指针
    int *p_new = new_arr; // 指向新数组的指针

    // 从键盘输入10个整数（空格分隔）
    printf("输入10个整数：");
    for (int i = 0; i < 10; i++) {
        scanf("%d", p_arr + i);  // 指针方式访问原数组
    }

    // 每两个元素间插入1，构建新数组
    for (int i = 0; i < 10; i++) {
        *(p_new++) = *(p_arr + i);  // 复制原数组元素到新数组
        if (i != 9) {               // 最后一个元素后不插入1
            *(p_new++) = 1;         // 插入1
        }
    }

    // 输出新数组（空格分隔）
    for (int i = 0; i < 19; i++) {
        printf("%d ", new_arr[i]);
    }
    printf("\n");

    return 0;
}

