#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i=0;
	int *a;
	int N;
	printf("Input array length: ");
	scanf("%d",&N);
	a=(int *) malloc(N*sizeof(int)); 
	for(i=0;i<N;i++){
		a[i]=i+1;
		printf("%-5d",a[i]);
		if((i+1)%10==0)
		printf("\n"); 
	} 
	free(a);
	printf("\n");
	return 0; 
}
