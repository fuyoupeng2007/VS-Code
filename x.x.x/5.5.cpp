#include<stdio.h>
int main(void){
	int n,c,b;
	printf("请输入数组[N]中N的值："); 
	scanf("%d",&n);
	int a[100][100]={0};
	int max=0;
	printf("输入数组：");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) {
		scanf("%d",&a[i][j]);
		if(a[i][j]>max){
		max=a[i][j];
		c=i;b=j;
		}
}
}
    printf("最大数在第%d行，第%d列",c+1,b+1);
}
