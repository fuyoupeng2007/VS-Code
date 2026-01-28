#include<stdio.h>
int main(void){
	int n;
	printf("请输入数组大小："); 
	scanf("%d",&n);
	int a[1000]={0};
	int z=0;
	int f=0;
	int l=0;
	printf("输入数组：");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
			l++;
		} else if(a[i]>0){
			z++;
		} else f++;
	}
	printf("正数有%d个，负数有%d个，零有%d个",z,f,l);
}
