#include<stdio.h>
int main(void){
	int n;
	int cnt=0;
	int max=0;
	int min=10000;
	int b=0;
	int c=0;
	printf("请输入数组[N]中N的值："); 
	scanf("%d",&n);
	int a[100][100]={0};
	printf("输入数组：");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) {
		scanf("%d",&a[i][j]);
}
}
    for(int h=0;h<n;h++){
    for(int j=0;j<n;j++){
    		if(a[h][j]>max){
			max=a[h][j];
			b=j;
		}
	}
    for(int i=0;i<n;i++){
    	if(a[i][b]<min){
    		min=a[i][b];
    		c=i;
		}
	}
	if(c==h){
		printf("%d是鞍点，在第%d行第%d列",a[c][b],c+1,b+1);
		cnt=1;
	} 
		}
		if(cnt==0) printf("没有鞍点"); 
	}
