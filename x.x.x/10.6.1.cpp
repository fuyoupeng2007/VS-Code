#include<stdio.h>
int main(void)
{
	int a=10;
	int* pa =&a;
	int** ppa=&pa;
	
	**ppa=20;
	printf("%d\n",a);
	
	
}
