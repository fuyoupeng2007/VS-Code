#include<stdio.h>
int main(void)
#define F "fuyoupeng"
{
	printf("[%s]\n",F);
	printf("[%20s]\n",F);
	printf("[%-20s]\n",F);	
	printf("[%*s]\n",(width+3),F);
	
	return 0;
}
