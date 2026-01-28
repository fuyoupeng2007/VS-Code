#include<stdio.h>
#define NUMBER 5
#define LENGTH 100
#define SIZE 50
typedef struct recipient{
	int id;
	char name[SIZE];
	char phone[SIZE];
	char address[LENGTH];
}Person;
void inputPerson(Person *person);
int findPersonById(Person persons[],int num,int id);
void displayPersonDetails(Person person);
void displayPersons(Person persons[],int num); 

int main(void){
	Person *p;
	int i=0;
	for(i=0;i<NUMBER;i++){
		inputPerson(p+i);
	}
	displayPersons(p,NUMBER);
	printf("请输入收件人ID：");
	int id;
	scanf("%d",&id);
	if(findPersonById(p,NUMBER,id)==-1)
	printf("无法找到此id的收件人信息");
	
}
void inputPerson(Person *person){
	scanf("%d %s %s %s",person->id,person->name,person->phone,person->address);
}
int findPersonById(Person persons[],int num,int id){
	for(int i=0;i<num;i++){
		if(persons[i].id==id)
		displayPersonDetails(persons[i]);
		return i;
	}
	return -1;
}
void displayPersonDetails(Person person){
	printf("%d %s %s %s",person.id,person.name,person.phone,person.address);
}
void displayPersons(Person persons[],int num){
	printf("所有收件人信息：");
	for(int i=0;i<num;i++){
		displayPersonDetails(persons[i]);
	} 
}








