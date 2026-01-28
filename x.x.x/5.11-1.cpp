#include<stdio.h>
#define const 60
int main(void)
{
	int n;
	while(n<=0)
	{
	
	scanf("%d",&n);
	printf("%d hours,%d minutes",n/const,n%const);
    }
    return 0;
}
