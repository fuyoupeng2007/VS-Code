#include<stdio.h>
int main(void){
	int n;
	printf("请输入数组大小："); 
	scanf("%d",&n);
	int a[1000]={0};
	int sum=0;
	printf("输入数组：");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
}
    printf("和为%d",sum);
}
