#include<stdio.h>
int main(void)
{
	int x,y,z,max;
	printf("please put in the value of x,y,z: %d %d %d\n",x,y,z);
	scanf("%d %d %d",&x,&y,&z);
	int mac=x;
	if(y>max)
	max=y;
	if(z>max)
	max=z;
	return max;
	printf("The max of x,y,z is %d",max);
}
