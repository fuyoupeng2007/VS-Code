#include<stdio.h>
void bubbleSort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {  // 外层循环：控制排序轮数（n-1轮）
        int flag = 0;  // 优化：标记本轮是否发生交换，无交换则提前退出
        for (int j = 0; j < len - 1 - i; j++) {  // 内层循环：每轮比较未排序元素
            if (arr[j] > arr[j + 1]) {  // 若前元素 > 后元素，交换
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;  // 标记发生交换
            }
        }
        if (flag == 0) break;  // 无交换，数组已有序，退出循环
    }
}
int main(void){
	int n;
	printf("请输入数组[N]中N的值："); 
	scanf("%d",&n);
	int a[100][100]={0};
	int b[100]={0};
	printf("输入数组：");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) {
		scanf("%d",&a[i][j]);
}
    bubbleSort(a[i],n);
    	b[i]=a[i][n-1];
    	printf("%d ",b[i]);
}
}

