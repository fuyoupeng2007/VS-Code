#include<stdio.h>
#define NUM 3
typedef struct stu{
	char name[20];
	char sex[6];
	double grade[5];
	double ave;
}STU;
void input(STU *stu);
void sort(STU *stu);
void output(STU *stu);

int main(void){
	STU *stu;
	for(int i=0;i<NUM;i++){
		input(stu+i);
	}
	sort(stu);
	output(stu);
	
	return 0;
	
}
void input(STU *stu){
	double sum=0.0;
	scanf("%s %s",stu->name,stu->sex);
	for(int i=0;i<4;i++){
		scanf("%lf",&stu->grade[i]);
		sum+=stu->grade[i];
	}
	stu->ave=sum/4;
}
void sort(STU *stu){
	for(int i=0;i<NUM;i++){
		for(int j=0;j<NUM-1-i;j++){
			if(stu[j].ave>stu[j+1].ave){
				STU temp;
				temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
			}
		}
	}
}
void output(STU *stu){
	 printf("姓名\t性别\t数学\t物理\t英语\t计算机\t平均分\n");
	 for(int i=0;i<NUM;i++){
	 if(stu->ave<80){
	 	 printf("%s\t%c\t%lf\t%lf\t%lf\t%lf\t%.2f\n",
                   stu[i].name,
                   stu[i].sex,
                   stu[i].grade[0],
                   stu[i].grade[1],
                   stu[i].grade[2],
                   stu[i].grade[3],
                   stu[i].ave);
	 }
}

}






