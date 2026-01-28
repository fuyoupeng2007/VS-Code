#include<stdio.h>
int main(void){
	int i;
	int a[4],(*ap)[4];
	
	ap=(int (*)[4])a;
	
	for(i=0;i<4;i++){
		scanf("%d",*ap+i);
	} 
	
	for(i=0;i<4;i++)
	printf("%d\t",*(*ap+i));
}
