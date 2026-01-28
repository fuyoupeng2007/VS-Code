#include<stdio.h>
int main(void)
{
	int input,counto,countj;
	int o,j,sumo,sumj;
	o=j=sumo=sumj=0;
	double averageou,averageji;
	while(scanf("%d",&input)) 
	{
		if (input==0) break;
		if(input%2==0)
		{
			o++;
			sumo+=input;
			counto++;
		}
		else{
			j++;
			sumj+=input;
			countj++;
		}
	}
	averageou=sumo/counto;
	averageji=sumj/countj;
	printf("ou appear %d time./nji appear %d time",o,j);
	printf("The average of ou is %lf ./nThe average of ji is %lf ./n",averageou,averageji);
	return 0;
}
