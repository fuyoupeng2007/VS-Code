#include<stdio.h>
#define N 80
int l_max(int a[N][N],int h,int l,int *p);
int main(void){
	 int a[N][N]={0};
	 int i,j,l,h,max,lmax;
	 max=0;
	 int *p=&max;
	 printf("请输入二维数组的行数和列数：");
	 scanf("%d %d",&h,&l);
	 printf("请输入二维数组："); 
	 for(i=0;i<h;i++){
	 	for(j=0;j<l;j++){
	 		scanf("%d",&a[i][j]);}}
			 lmax=l_max(a,h,l,p);
			 printf("最大值是%d,列号是%d",*p,lmax+1);
} 

int l_max(int a[N][N],int h,int l,int *p){
	int max,maxi,lmax;
	lmax=max=maxi=0;
	for(int j=0;j<l;j++){
		maxi=0;
		for(int i=0;l<h;l++){
			maxi+=a[i][j];
		}
		if(maxi>*p){
			*p=maxi;
			lmax=j;
		}
	}
	
	return lmax;
}
