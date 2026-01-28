#include<stdio.h>
int main(void)
{
	int a=10;
	int b=20;
	int c=30;
	int arr[10];
	
	int* parr[10]={&a,&b,&c};
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("%d ",*(parr[i]));
	}
	return 0;
}
