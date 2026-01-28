#include<stdio.h>

void Bubsort(int a[],int);
void swap(int a[] ,int );
void Scansort(int a[],int);

int main(void){
	int a[3]={0};
	for(int i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	
	Bubsort(a,3);
	for(int i=0;i<3;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	swap(a,3);
	for(int i=0;i<3;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	Scansort(a,3);
	for(int i=0;i<3;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

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

void Scansort(int a[],int n){
	int i,j,k,temp;
	for(i=0;i<n;i++){
		j=i;
		for(k=i+1;k<n;k++){
			if(a[k]<a[j]) j=k;
		}
		if(j!=i){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}

void swap(int a[],int n){
	int *i,*j,temp;
	for(i=a;i<a+n-1;i++){
		for(j=a;j<a+n-1-(i-a);j++){
			if(*j>*(j+1)){
				temp=*j;
				*j=*(j+1);
				*(j+1)=temp;
			}
		}
	}
}



























