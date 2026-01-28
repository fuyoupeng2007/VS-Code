#include <stdio.h>
void sort(int arr[], int n, int flag) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (flag == 1) {
                if (arr[j] < arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } else {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

int main() {
    int n, i, flag;
    int arr[10]; 
    
    printf("请输入整数个数n(n<10)：");
    scanf("%d", &n);
    printf("请输入%d个整数：", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("请输入排序参数(1为递减，其他为递增)：");
    scanf("%d", &flag);
    
    sort(arr, n, flag);
    
    printf("排序后结果：");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

