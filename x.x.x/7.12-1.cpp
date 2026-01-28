#include<stdio.h>
int main(void)
{
	char ch;
	int kong,huan,qi;
	printf("print '#'to end this program.");
	while((ch=getchar())!='#')
	{
		if(ch==' ')
		kong++;
		else if(ch=='\n')
		huan++;
		else qi++;
	}
	printf("kong appear %d times.\n huan appear %d times.\n qi appear %d time.\n",kong,huan,qi);
	return 0;
}
