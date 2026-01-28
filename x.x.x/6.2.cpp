#include<stdio.h>
int main(void){
	int a[100]={0};
	int b[100]={0};
	int m,n,temp;
	printf("ÇëÊäÈën,mµÄÖµ£º");
	scanf("%d %d",&n,&m) ;
	for(int c=0;c<n;c++){
		scanf("%d",&a[c]);
		b[c]=a[c];
	}
    int *p_a = a;   
    int *p_b = b;     
    for (int *i = p_b + n - m, *j = p_a; i < p_b + n; i++, j++) {
        *j = *i;
    }

    for (int *i = p_b, *j = p_a + m; i < p_b + n - m; i++, j++) {
        *j = *i;
    }
	
	for(int c=0;c<n;c++){
		printf("%d ",a[c]);
	}
}
