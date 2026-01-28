#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // 定义字符数组
    char *p = str;  // 指针指向字符串首地址
    int n;

    // 用 scanf 读取字符串（不含空格）
    scanf("%s", str);  
    // 读取整数n
    scanf("%d", &n);

    // 检查n的合法性（1 <= n <= 字符串长度）
    int len = strlen(str);
    if (n < 1 || n > len) {
        return 1;  // 非法输入时退出（题目未要求提示，可省略）
    }

    // 输出第n个字符（指针偏移n-1位）
    printf("%c\n", *(p + n - 1));

    return 0;
}


