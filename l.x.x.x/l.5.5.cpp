#include<stdio.h>
#define SIZE 4
int main(void){
	int data[SIZE][SIZE],i,j,d;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			scanf("%d",&data[i][j]);
		}
	} 
		for(i=0;i<SIZE;i++){
		for(j=i+1;j<SIZE;j++){
			d=data[i][j];
			data[i][j]=data[j][i];
			data[j][i]=d;
		}
	} 
		for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			printf("%4d ",data[i][j]);
		}
		printf("\n");
	} 
	
	return 0;
}
