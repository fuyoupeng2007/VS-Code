#include <stdio.h>

// 交换函数
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 快速排序核心：划分区间
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // 选择最右侧元素为基准值
    int i = low - 1;  // i 是“小于基准区”的边界
    
    for (int j = low; j < high; j++) {  // 遍历数组，划分区间
        if (arr[j] <= pivot) {  // 当前元素 <= 基准值，加入“小于基准区”
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);  // 将基准值放到最终位置（i+1）
    return i + 1;  // 返回基准值索引
}

// 快速排序递归函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);  // 划分基准值
        quickSort(arr, low, pivotIndex - 1);  // 递归排序左半部分（小于基准）
        quickSort(arr, pivotIndex + 1, high);  // 递归排序右半部分（大于基准）
    }
}

int main() {
    int arr[100], len;
    printf("请输入数组长度：");
    scanf("%d", &len);
    
    printf("请输入%d个整数：", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
    
    quickSort(arr, 0, len - 1);  // 调用快速排序（初始区间：0 ~ len-1）
    
    printf("排序后数组：");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

