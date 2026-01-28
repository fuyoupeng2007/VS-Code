#include<stdio.h>
int main(void){
	int data[2][3],*pdata[2];
	int i,j;
	
	for(i=0;i<2;i++)
	for(j=0;j<3;j++)
	data[i][j]=(i+1)*(j+1);
	pdata[0]=data[0];
	pdata[1]=data[1];
	for(i=0;i<2;i++)
	for(j=0;j<3;j++){
		printf("data[%d][%d]:%-2d\n",i,j,*pdata[i]); 
	} 
	
	return 0;
}
