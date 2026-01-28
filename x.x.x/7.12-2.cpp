#include<stdio.h>
int main(void)
{
	char ch;
	printf("print '#'to end this program.");
	while((ch=getchar())!='#')
	{
		printf("The ASC value for %c is %d\n",ch,ch);
	}
	return 0;
}
