#include <stdio.h>
#include <string.h>

int main() {
    char input_str[100]; // 存储scanf输入的字符串
    char char_arr[100];  // 最终存储单个字符的数组
    int i, len;

    // 1. 用scanf获取用户输入的字符串
    printf("请输入一个字符串：");
    scanf("%s", input_str); // %s 用于读取字符串（遇空格/回车结束）

    // 2. 获取输入字符串的长度
    len = strlen(input_str);

    // 3. 循环遍历，将字符逐个读入数组
    for (i = 0; i < len; i++) {
        char_arr[i] = input_str[i]; // 把输入字符串的第i个字符，存入数组第i位
    }
    char_arr[len] = '\0'; // 可选：给数组加结束符，让它也成为一个完整字符串

    // 测试：输出数组中的每个字符，验证结果
    printf("数组中的字符依次为：");
    for (i = 0; i < len; i++) {
        printf("%c ", char_arr[i]);
    }

    return 0;
}

