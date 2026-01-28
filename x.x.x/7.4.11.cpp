#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> // 添加isdigit函数用于数字判断
#define N 20 // 增加缓冲区大小以处理更多数字子串

// 函数声明
void input(char (*pstr)[80], int *actualCount);
void processString(char *str, char (*p)[80], int *count);
void output(char (*p)[80], int n, int isSorted);

int main(void) {
    char source[1][80];  // 只需要一个输入字符串
    char numbers [N][80]; // 存储提取的数字子串
    int actualCount = 0; // 实际提取到的数字子串数量
    
    input(source, &actualCount);
    
    if (actualCount == 0) {
        printf("字符串中没有找到数字子串！\n");
        return 0;
    }
    
    output(numbers, actualCount, 0); // 输出未排序的结果
    
    // 找出最大值
    long maxNum = -1;
    for (int i = 0; i < actualCount; i++) {
        long currentNum = strtol(numbers[i], NULL, 10);
        if (currentNum > maxNum) {
            maxNum = currentNum;
        }
    }
    
    printf("字符串中最大的数字是: %ld\n", maxNum);
    return 0;
}

// 输入和处理字符串
void input(char (*pstr)[80], int *actualCount) {
    printf("请输入一行字符串（包含字符、数字和非数字字符）:\n");
    fgets(pstr[0], 80, stdin);
    pstr[0][strcspn(pstr[0], "\n")] = '\0'; // 移除换行符
    
    processString(pstr[0], (*numbers)[80], actualCount);
}

// 处理字符串并提取所有数字子串
void processString(char *str, char (*p)[80], int *count) {
    char *current = str;
    int bufferIndex = 0;
    int foundDigit = 0; // 标记是否在提取数字
    
    while (*current != '\0') {
        if (isdigit(*current)) {
            // 如果是数字字符，开始或继续提取
            if (!foundDigit) {
                // 新的数字子串开始
                foundDigit = 1;
                bufferIndex = 0;
            }
            if (bufferIndex < 79) { // 防止溢出
                p[*count][bufferIndex++] = *current;
            }
        } else {
            // 遇到非数字字符
            if (foundDigit) {
                // 结束当前数字子串
                p[*count][bufferIndex] = '\0';
                (*count)++;
                foundDigit = 0;
                
                // 检查是否达到最大数量
                if (*count >= N) break;
            }
        }
        current++;
    }
    
    // 处理末尾的数字子串
    if (foundDigit && *count < N) {
        p[*count][bufferIndex] = '\0';
        (*count)++;
    }
}

// 输出所有数字子串（可选排序）
void output(char (*p)[80], int n, int isSorted) {
    if (isSorted) {
        printf("\n排序后的数字子串:\n");
    } else {
        printf("\n提取到的数字子串:\n");
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d: %s (数值: %ld)\n", i+1, p[i], strtol(p[i], NULL, 10));
    }
}

