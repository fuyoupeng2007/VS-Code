#include<stdio.h> 

void Bubsort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int main(void){
	int a[5][5]={0};
	int b[50]={0};
	int cnt=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&a[i][j]);
			b[cnt]=a[i][j];
			cnt++;
		}
	}
	Bubsort(b,25);
	
	a[2][2]=b[24];
	a[0][0]=b[0];
	a[0][4]=b[1];
	a[4][0]=b[2];
	a[4][4]=b[3];
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%5d ",a[i][j]);
		}
		printf("\n");
	}
	
}
