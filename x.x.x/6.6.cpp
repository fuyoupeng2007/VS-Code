#include <stdio.h>
#include <stdlib.h>

void sort(int **arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (**(arr + j) > **(arr + j + 1)) {
                int *temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("请输入整数的个数: ");
    scanf("%d", &n);
    
    int *numbers = (int *)malloc(n * sizeof(int));
    
    int **ptr_array = (int **)malloc(n * sizeof(int *));
    
    printf("请输入%d个整数:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        ptr_array[i] = &numbers[i];
    }
    sort(ptr_array, n);
    
    printf("排序后的结果:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr_array[i]);
    }
    printf("\n");
    
    free(numbers);
    free(ptr_array);
    
    return 0;
}

