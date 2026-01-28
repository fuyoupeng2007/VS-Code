#include <stdio.h>

int main(void) {
    int k, sumd = 0, summ = 0;
    int i;  // 修复1：将i声明在循环外部，确保作用域覆盖后续计算
    
    scanf("%d", &k);
    
    // 修复2：循环条件补充等号（sumd+i <= k），避免漏算等于k的情况
    for (i = 1; sumd + i <= k; i++) {  
        sumd += i;
        summ += i * i;
    }
    
    // 此时i为"未加入sumd的下一项"，逻辑正确
    summ += i * (k - sumd);  
    
    printf("%d", summ);
    return 0;
}

