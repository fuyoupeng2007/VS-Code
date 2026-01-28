#include<stdio.h>

// 函数声明：判断一个数是否为素数
int jugde(int i); 

int main() { 
    int a, b;
    scanf("%d %d", &a, &b);
    
    // 判断条件：a和b都是素数，且绝对值相差2
    if (jugde(a) && jugde(b) && (a - b == 2 || b - a == 2)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

// 函数定义：判断素数（返回1为素数，0为非素数）
int jugde(int i) {
    if (i <= 1) return 0; // 1及以下不是素数
    if (i == 2) return 1; // 2是素数（唯一偶素数）
    if (i % 2 == 0) return 0; // 偶数（除2外）不是素数
    
    // 优化循环：只检查到 sqrt(i)，且步长为2（跳过偶数）
    for (int j = 3; j * j <= i; j += 2) {
        if (i % j == 0) { // 若能被整除，不是素数
            return 0;
        }
    }
    return 1; // 未找到除数，是素数
}

