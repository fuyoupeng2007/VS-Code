#include <stdio.h>
#include <string.h>

int main() {
    char input_str[100]; // 存储scanf输入的字符串
    char char_arr[100];  // 最终存储单个字符的数组
    int i, len,j;
    scanf("%s", input_str); // %s 用于读取字符串（遇空格/回车结束）
    // 2. 获取输入字符串的长度
    len = strlen(input_str);
    // 3. 循环遍历，将字符逐个读入数组
    for (i = 0; i < len; i++) {
        char_arr[i] = input_str[i];
    }
    	if(char_arr[0]!='-')
		{
		for(j=len;j>=0;j--)
		 printf("%c",char_arr[j]);
        
		}
        else {
        	printf("-");
        	for(j=len;j>=1;j--)
        	printf("%c",char_arr[j]);
		}
    return 0;
}
        
