#include<stdio.h>
#include<string.h>
#define LENGTH 6
void reverse(char *s);
void itoa(int n,char *s);
int main(void){
	int n;
	char s[LENGTH];
	printf("input a integer:");
	scanf("%d",&n);
	itoa(n,s);
	printf("string:%s\n",s);
}
void reverse(char *s){
	int i,j,k;
	for(i=0,j=strlen(s)-1;i<j;i++,j--){
		k=s[i];
		s[i]=s[j];
		s[j]=k;
	}
}
void itoa(int n,char *s){
	int i,sign;
	if((sign=n)<0){
		n=-n;
	}
	i=0;
	do{
		s[i++]=n%10+'0';
	} while((n/=10)>0);
	if(sign<0){
		s[i++]='-';
	}
	s[i]='\0';
	reverse(s);
}











