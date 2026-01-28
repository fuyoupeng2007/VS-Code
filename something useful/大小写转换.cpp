#include <stdio.h>

int main(void) {
    char c;  // 存储当前字符（避免与循环变量i混淆）
    int con = 'a' - 'A';  // 大小写转换差值（固定为32）
    
    // 循环读取字符，直至遇到换行符或文件结束符EOF
    while ((c = getchar()) != '\n' && c != EOF) {
        if (c >= 'a' && c <= 'z') {  // 覆盖所有小写字母
            putchar(c - con);  // 转换为大写
        } else {
            putchar(c);  // 其他字符直接输出
        }
    }
    return 0;
}

