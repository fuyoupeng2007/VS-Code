#include <stdio.h>
#include <math.h>  // 用于sqrt()函数

// 函数功能：判断n是否为素数，是则返回1，否则返回0
int is_prime(int n) {
    // 步骤1：排除小于2的数和偶数
    if (n <= 1) return 0;       // 0、1不是素数
    if (n == 2) return 1;       // 2是唯一的偶素数
    if (n % 2 == 0) return 0;   // 其他偶数不是素数

    // 步骤2：检查3到sqrt(n)的奇数除数（步长为2）
    int sqrt_n = sqrt(n);       // 计算平方根，减少循环次数
    for (int i = 3; i <= sqrt_n; i += 2) {
        if (n % i == 0) {       // 若能被整除，不是素数
            return 0;
        }
    }
    return 1;  // 所有可能除数均无法整除，是素数
}

// 主函数示例：测试输入的数是否为素数
int main() {
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);

    if (is_prime(num)) {
        printf("%d是素数\n", num);
    } else {
        printf("%d不是素数\n", num);
    }
    return 0;
}

