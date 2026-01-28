#include<stdio.h>
int main(void)
{
	float fu=64.25;
	printf("Enter a floating-point value:%.2f \n",fu);
	printf("fixed-point notation:%f \n",fu);
	printf("exponential notation:%e \n",fu);	
	printf("p notation:%a \n",fu);
	return 0;
}
