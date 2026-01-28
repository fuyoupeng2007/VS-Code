#include<stdio.h>
int main(void){
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int (*ap)[4],i,j;
	ap=a;
	printf("please enter row and column number:");
	scanf("%d%d",&i,&j);
	printf("a(%d,%d) = %d:\n",i,j,*(*(ap+i)+j));
}
