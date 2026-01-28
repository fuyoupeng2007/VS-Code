#include<stdio.h>
#define SIZE 7
void sort(int grade[SIZE]);
int total(int grade[SIZE]); 
float aver(int totalgrade);

int main(void){
	int grade[SIZE];
	int totalgrade;
	float avergrade;
	for(int i=0;i<SIZE;i++){
		scanf("%d",&grade[i]); 
	}
	sort(grade);
	totalgrade=total(grade);
	avergrade=aver(totalgrade);
	printf("总分：%d,平均分：%lf",totalgrade,avergrade);
	return 0;
}

void sort(int grade[SIZE]){
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE-1-i;j++){
			if(grade[j]>grade[j+1]){
				int temp=grade[j];
				grade[j]=grade[j+1];
				grade[j+1]=temp;
			}
		}
	}
}
int total(int grade[SIZE]){
	int sum=0;
	for(int i=1;i<SIZE-1;i++){
		sum+=grade[i];
	}
	return sum;
}
float aver(int totalgrade){
	float aver;
	aver=(1.0*totalgrade)/(SIZE-2);
	return aver;
}






