#include <stdio.h>

// 统计数字的位数（含0的情况）
int count_digits(int num) {
    if (num == 0) return 1; // 0的位数为1
    int digits = 0;
    while (num != 0) {
        num /= 10;
        digits++;
    }
    return digits;
}

int main(void) {
    int i, m, n, cnt;
    char op; // 存储运算符（a/b/c/d）
    
    scanf("%d", &i);
    getchar(); // 读取并丢弃输入缓冲区中的换行符\n
    
    for (int j = 0; j < i; j++) {
        // 读取运算符（a/b/c/d），跳过可能的空白字符（如空格、换行）
        while ((op = getchar()) == ' ' || op == '\n');
        
        // 读取两个整数m和n（假设输入格式为：运算符 数字1 数字2）
        scanf("%d %d", &m, &n);
        
        int result;
        char op_char; // 输出时显示的运算符（+、-、*、/）
        switch (op) {
            case 'a': result = m + n; op_char = '+'; break;
            case 'b': result = m - n; op_char = '-'; break;
            case 'c': result = m * n; op_char = '*'; break;
            case 'd': result = m / n; op_char = '/'; break; // 修正运算符输出
            default: printf("Invalid operator\n"); continue; // 处理无效运算符
        }
        
        // 计算输出字符串的总长度：数字位数 + 运算符1位 + 等号1位
        cnt = count_digits(m) + count_digits(n) + count_digits(result) + 2;
        
        // 输出表达式和总长度
        printf("%d%c%d=%d", m, op_char, n, result);
        printf("%d\n", cnt); // 单独一行输出长度，避免与表达式粘连
    }
    return 0;
}

