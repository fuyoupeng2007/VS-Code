#include<stdio.h>
#include<string.h>

int main() { 
    char ch[1000];
    // 读取整行输入（含空格），并去除末尾换行符
    fgets(ch, sizeof(ch), stdin);
    ch[strcspn(ch, "\n")] = '\0';  // 替换换行符为字符串结束符
    
    char *p = ch;
    int len = strlen(ch);
    
    for(int i=0; i<len; i++) {
        if(*(p+i) == ' ') continue;  // 跳过空格（若输入含空格）
        
        int num = 1;
        // 标记并统计重复字符
        for(int j=i+1; j<len; j++) {
            if(*(p+i) == *(p+j)) {
                num++;
                *(p+j) = ' ';  // 标记后续重复字符为空格，避免重复统计
            }
        }
        
        if(num >= 2) {
            printf("%c %d\n", *(p+i), num);
        }
        *(p+i) = ' ';  // 标记当前字符为已处理，避免后续重复统计
    }
    
    return 0; 
}

