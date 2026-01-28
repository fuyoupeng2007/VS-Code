#include<stdio.h>
int main(void){
	int a[4]={10,20,30,40};
	int (*ap)[4];
	ap=(int(*)[4])a;
	
	printf("访问数组元素：\n");
	for(int i =0;i<4;i++){
		printf("a[%d]=%d\n",i,*(*ap+i));
	}
	return 0;
}
