#include <stdio.h>
#include <string.h>

int main() {
    char s[100]; // 题目数据规模小，足够存储输入
    fgets(s, sizeof(s), stdin); // 读取整行输入（含空格和换行符）
    int len = strlen(s);
    int count = 0;
    for (int i = 0; i < len; i++) {
        // 跳过空格和换行符
        if (s[i] != ' ' && s[i] != '\n') {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

