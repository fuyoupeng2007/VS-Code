#include<stdio.h>
yue(int a,int b){
	int m=1;
	if(a<b){
	for(int i=2;i<=a;i++){
		if(a%i==0){
			if(b%i==0)
			m=i;
		}
	}
	printf("最大公约数是%d\n",m);
}
	else{
	for(int i=2;i<=b;i++){
		if(a%i==0){
			if(b%i==0)
			m=i;
		}
	}
	printf("最大公约数是%d\n",m);
	}
}


bei(int a,int b){
	int n=10000;
	if(a<b){
	for(n=b;n<10000;n++){
		if(n%b==0){
			if(n%a==0){
			printf("最小公倍数是%d\n",n);
			break;}
		}
	}
}
	 else{
	for(n=a;n<10000;n++){
		if(n%a==0){
			if(n%b==0)
			printf("最小公倍数是%d\n",n);
			break;
		}
	}
}

}
int main(void)
{
	int a,b,m,n,i;
	m=1;
	n=10000;
	scanf("%d %d",&a,&b);
	yue(a,b);
	bei(a,b);

	return 0;
}
