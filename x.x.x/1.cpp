#include<stdio.h>
int main(void)
{
    char ch = 'a';  // 初始化ch为'a'
    while(ch <= 'z') {
        printf("The ASCII value for %c is %d\n", ch, ch);
        ch++;  // 每次循环后ch增加1
    }
    return 0;
}


