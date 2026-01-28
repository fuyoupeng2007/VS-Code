#include <stdio.h>
#include <stdlib.h>  // 包含所有字符串转换函数的头文件
#define BUF_SIZE 30 // 定义字符数组缓冲区大小，足够存储转换后的字符串

int main() {
    // ---------------------- 1. atof：字符串转双精度浮点数 ----------------------
    const char *str_float = "123.456";
    double num_float = atof(str_float);
    printf("1. atof函数：将字符串\"%s\"转为浮点数 = %.3f\n", str_float, num_float);
    printf("   运算验证：%.3f + 10.544 = %.3f\n\n", num_float, num_float + 10.544);

    // ---------------------- 2. atoi：字符串转int整型 ----------------------
    const char *str_int = "-789";
    int num_int = atoi(str_int);
    printf("2. atoi函数：将字符串\"%s\"转为整型 = %d\n", str_int, num_int);
    printf("   运算验证：%d * 2 = %d\n\n", num_int, num_int * 2);

    // ---------------------- 3. atol：字符串转long长整型 ----------------------
    const char *str_long = "1234567890"; // 数值超出部分编译器int范围，用long更安全
    long num_long = atol(str_long);
    printf("3. atol函数：将字符串\"%s\"转为长整型 = %ld\n", str_long, num_long);
    printf("   运算验证：%ld + 1000000000 = %ld\n\n", num_long, num_long + 1000000000);

    // ---------------------- 4. itoa：整数转字符串（支持指定进制） ----------------------
    int n = -1234;
    char buf[BUF_SIZE]; // 存储转换后的字符串
    // 4.1 转十进制
    itoa(n, buf, 10);
    printf("4. itoa函数：整数%d转十进制字符串 = %s\n", n, buf);
    // 4.2 转十六进制
    itoa(255, buf, 16);
    printf("   整数255转十六进制字符串 = %s\n", buf);
    // 4.3 转二进制
    itoa(10, buf, 2);
    printf("   整数10转二进制字符串 = %s\n", buf);

    return 0;
}

