#include<stdio.h>

int main(void){
	int a[4][3]={0};
	int b[3][4]={0};
	printf("ÇëÊäÈëA¾ØÕó:"); 
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]); 
		}
	}
	
	for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            b[j][i] = a[i][j];
        }
    }
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%d ",b[i][j]); 
		}
		printf("\n");
	}
}
