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
	int name[50]={0};
	int g1[50]={0} ;
	int g2[50]={0} ;
	int g3[50]={0} ;
	int a[50]={0};
	int n;
	
	printf("请输入同学个数：");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&g1[i],&g2[i],&g3[i]);
		a[i]=(g1[i]+g2[i]+g3[i])/3;
		printf("第%d个同学的平均分是%d\n",i+1,a[i]);
	}
	bubbleSort(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	
	
}
