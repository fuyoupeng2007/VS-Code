#include <stdio.h>
#include <stdlib.h>

// 函数声明：使用二维数组指针实现转置
void convert(int **src, int **dest, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            dest[j][i] = src[i][j];  // 核心转置操作
        }
    }
}

int main() {
    int rows, cols;
    
    // 获取矩阵维度
    printf("请输入矩阵的行和列： ");
    scanf("%d %d", &rows, &cols);
    
    // 为原矩阵动态分配二维数组
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    
    // 为转置矩阵动态分配二维数组（行列为反转）
    int **transposed = (int **)malloc(cols * sizeof(int *));
    for (int i = 0; i < cols; i++) {
        transposed[i] = (int *)malloc(rows * sizeof(int));
    }
    
    // 输入矩阵元素
    printf("请输入矩阵元素（按行输入）:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // 执行转置操作
    convert(matrix, transposed, rows, cols);
    
    // 输出转置结果
    printf("\n转置矩阵:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
    
    // 释放内存
    for (int i = 0; i < rows; i++) free(matrix[i]);
    free(matrix);
    
    for (int i = 0; i < cols; i++) free(transposed[i]);
    free(transposed);
    
    return 0;
}

