#include<stdio.h>
#include<string.h>
void myStringFunction(char *str1,char *str2,char *p);
int main(void){
	char *str1="string";
	char *str2="12345";
	char a[50]={0};
	char *p=a;
	int l1,l2;
	l1=strlen(str1);
	l2=strlen(str2);
	myStringFunction(str1,str2,p);
	for(int i=0;i<(l1+l2);i++){
		printf("%c",a[i]);
	}
}
void myStringFunction(char *str1,char *str2,char*p){
	int l1,l2;
	l1=strlen(str1);
	l2=strlen(str2);
	if(l1>l2){
		for(int i=0;i<l2;i++){
			*p=*str1;
			p++;
			*p=*str2;
			p++;
			str1++;
			str2++;
		}
		for(int i=0;i<l1-l2;i++){
			*p=*str1++;
		}
	}
	else {
		for(int i=0;i<l1;i++){
			*p=*str1;
			*(p++)=*str2;
			p++;
			str1++;
			str2++;
		}
		for(int i=0;i<l2-l1;i++){
			*p=*str2++;
		}
	}
}

