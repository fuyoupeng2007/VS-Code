#include<stdio.h>
#include<string.h>
#define N 1

void input(char (*p)[80],int n);
void statistic(char(*p)[80],int n,int *presult);
void sort(int *presult,int n,char(*pname)[20]);
void output(int *presult,int n,char(*pname)[20]) ;

int main(void){
	char str[N][80];
	char name[5][20]={"capital","lowercase","digital","space","other"};
	int result[5];
	
	input(str,N);
	statistic(str,N,result);
	sort(result,5,name);
	output(result,5,name);
	return  0;
}

void input(char (*p)[80],int n){
	int i;
	for(i=0;i<n;i++){
		printf("input %d th string:\n",i+1);
		gets(p[i]); 
	}
	return ;
}

void statistic(char (*p)[80],int n,int *presult){
	int i,j,k;
	
	for(k=0;k<n;k++){
		presult[k]=0;}
		for(i=0;i<n;i++){
			for(j=0;p[i][j]!='\0';j++){
				if(p[i][j]>='A'&& p[i][j]<='Z')
				presult[0]++;
				else if(p[i][j]>='a'&& p[i][j]<='z')
				presult[1]++;
				else if(p[i][j]>='0'&& p[i][j]<='9')
				presult[2]++;
				else if(p[i][j]==' ')
				presult[3]++;
				else presult[4]++; 
			}
		}
		
}
void sort(int *presult,int n,char(*pname)[20]){
	int i,j;
	int temp;
	char str[20];
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	if(presult[i]<presult[j]){
		temp=presult[i];
		presult[i]=presult[j];
		presult[j]=temp;
		
		strcpy(str,pname[i]);
		strcpy(pname[i],pname[j]);
		strcpy(pname[j],str); 
	}
	return ;
}
void output(int *presult,int n,char(*pname)[20]){
	int i;
	
	for(i=0;i<n;i++)
	printf("%s:%d\n",pname[i],presult[i]);
}














