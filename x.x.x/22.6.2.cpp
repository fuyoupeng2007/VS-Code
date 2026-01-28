#include<stdio.h>
#define SIZE 26
#define LENGTH 100
int isSameAlpha(int istr1[SIZE],int istr2[SIZE]);
 
int main(void){
	char str1[LENGTH];
	char str2[LENGTH];
	int istr1[SIZE]={0};
	int istr2[SIZE]={0};
	int sign=0;
	int num1,num2;
	printf("input the first string:");
	scanf("%s",str1); 
	printf("input the second string:");
	scanf("%s",str2); 
	for(int i=0;i<LENGTH;i++){
		if(str1[i]>='a'&&str1[i]<='z'){
			num1=str1[i]-'a';
			istr1[num1]++; 
		} else {
			num1=str1[i]-'A';
			istr1[num1]++;
		}
		if(str2[i]>='A'&&str2[i]<='A'){
			num2=str2[i]-'A';
			istr2[num2]++; 
		} else {
			num2=str2[i]-'A';
			istr2[num2]++;
		}
	}
	sign=isSameAlpha(istr1,istr2);
	if(sign==1) printf("这两个单词是变位词");
	else  printf("这两个单词不是变位词");
	
	 return 0; 
}

int isSameAlpha(int istr1[SIZE],int istr2[SIZE]){
	int cnt=1;
	for(int i=0;i<SIZE;i++){
		if(istr1[i]!=istr2[i])
		return 0;
	}
	return 1;
}











