#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file; // 文件指针
    char filename[] = "D:\\Code\\l.8.14.c"; // 文件名
    char data[] = "这是一个使用fopen的文件操作演示程序\n天禧智能体编写的C语言示例\n2026年";
    char buffer[256]; // 读取缓冲区

    // 使用fopen以写入模式打开文件 ("w")
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("错误：无法创建文件 %s\n", filename);
        exit(1); // 退出程序
    }
    
    // 向文件写入数据
    fprintf(file, "%s", data);
    printf("数据已写入文件: %s\n", filename);
    
    // 关闭文件
    fclose(file);
    printf("文件已关闭\n\n");

    // 使用fopen以读取模式打开文件 ("r")
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("错误：无法打开文件 %s\n", filename);
        exit(1);
    }
    
    // 从文件读取数据
    printf("文件内容:\n");
    printf("--------------------------------\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    printf("--------------------------------\n");
    
    // 关闭文件
    fclose(file);
    
    // 追加模式打开文件 ("a")
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("错误：无法打开文件 %s\n", filename);
        exit(1);
    }
    
    // 追加数据到文件末尾
    fprintf(file, "\n这是追加的内容");
    fclose(file);
    printf("\n已追加新内容到文件\n");
    
    // 重新读取并显示完整文件内容
    file = fopen(filename, "r");
    printf("\n更新后的文件内容:\n");
    printf("--------------------------------\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    printf("--------------------------------\n");
    fclose(file);

    return 0;
}
