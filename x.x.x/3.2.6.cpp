#include<stdio.h>
int main(void){
	int a[11]={0};
	int b[11]={0};
	int sum=0;
	a[1]=8;
	b[1]=1;
	printf("a[1]=8 ");
	for(int i=2;i<=10;i++){
		b[i]=b[i-1]+3;
		a[i]=a[i-1]+b[i];
		printf("a[%d]=%d ",i,a[i]);
	}
	for(int i=1;i<=11;i++){
		sum+=a[i];
	}
	printf("%d",sum);
	return 0;
}
