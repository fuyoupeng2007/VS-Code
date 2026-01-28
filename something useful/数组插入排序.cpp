#include <stdio.h>

// 插入排序函数（升序）
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];  // 取出未排序部分的第一个元素
        j = i - 1;     // 已排序部分的最后一个元素索引

        // 将大于key的元素向后移动一位
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;  // 将key插入到正确位置
    }
}

// 打印数组
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("排序前的数组: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("排序后的数组: ");
    printArray(arr, n);
    return 0;
}

