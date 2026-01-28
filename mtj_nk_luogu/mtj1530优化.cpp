#include <stdio.h>
#include <string.h>

int main() { 
    char ch[1000];
    int max = 1;  // 最大连续次数（至少为1）
    int cnt = 1;  // 当前连续次数计数
    fgets(ch, sizeof(ch), stdin);
    
    // 去除末尾换行符
    int len = strlen(ch);
    if (len > 0 && ch[len-1] == '\n') {
        ch[len-1] = '\0';
        len--;
    }
    
    if (len == 0) {  // 空字符串处理
        printf("0");
        return 0;
    }
    
    char *p = ch;  // 从第一个字符开始遍历
    for (int i = 1; i < len; i++) {  // 从第二个字符开始比较
        if (*(p + i) == *p) {  // 当前字符与前一个字符相同
            cnt++;
            if (cnt > max) max = cnt;  // 更新最大值
        } else {
            cnt = 1;  // 重置计数
            p = ch + i;  // 指针移到新字符位置
        }
    }
    
    printf("%d", max);
    return 0; 
}

