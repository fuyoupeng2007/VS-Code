#include<stdio.h>
int main(void){
	int n;
	printf("请输入数组[N]中N的值："); 
	scanf("%d",&n);
	int a[100][100]={0};
	printf("输入数组：");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) {
		scanf("%d",&a[i][j]);
		if(a[i][j]<0){
			a[i][j]=0;
		}
		printf("%d ",a[i][j]);
}
    printf("\n");
}
}
