#include<stdio.h>
int main(void){
	int a[4][4]={0};
	int b[4][4]={0};
	int max=0;
	int h,l;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int (*p)[4];
	p=b;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
		  *(*(p+j)+i)=a[i][j];
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d ",b[i][j]);
			if(b[i][j]>max) {
			max=b[i][j];
			h=i;l=j;}
		}
		printf("\n");
	}
	printf("最大元素是%d,在第%d行，第%d列",max,h+1,l+1);
	
	
	
}
