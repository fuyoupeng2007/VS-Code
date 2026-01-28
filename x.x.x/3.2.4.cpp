#include<stdio.h>
int main(void){
	int a[11]={0};
	a[0]=0;
	a[1]=10;
	a[2]=-3;
	printf("a[1]=%d a[2]=%d ",a[1],a[2]);
	for(int i=3;i<=10;i++){
		a[i]=3*a[i-1]+a[i-2];
		printf("a[%d]=%d ",i,a[i]);
	}
	return 0;
}
