#include <stdio.h>
#include <string.h>

int main() { 
    char ch[1000];
    char *p1, *p2;
    
    // 读取整行输入并去除末尾换行符
    fgets(ch, sizeof(ch), stdin);
    int len = strlen(ch);
    if (len > 0 && ch[len-1] == '\n') {
        ch[len-1] = '\0';  // 替换换行符为字符串结束符
        len--;  // 更新长度（去除换行符后）
    }
    
    p1 = ch;                  // 指向字符串头部
    p2 = ch + len - 1;        // 指向字符串尾部（非换行符）
    int is_palindrome = 1;    // 默认为回文（1：是，0：否）
    
    // 遍历到中间位置，比较对应字符
    while (p1 < p2) {
        if (*p1 != *p2) {     // 比较指针指向的字符内容
            is_palindrome = 0;
            break;            // 发现不相等，直接退出循环
        }
        p1++;  // 头指针后移
        p2--;  // 尾指针前移
    }
    
    printf(is_palindrome ? "YES" : "NO");  // 根据结果输出
    return 0; 
}

