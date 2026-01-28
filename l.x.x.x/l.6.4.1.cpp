#include<stdio.h>
#include<stdlib.h>
int main(void){

typedef struct {
    int id;
    char name[50];
} Student;

int num_students = 3;
Student *students = (Student*)malloc(num_students * sizeof(Student));
if (students == NULL) exit(1);

// 使用结构体数组
for (int i = 0; i < num_students; i++) {
    students[i].id = i + 1;
    snprintf(students[i].name, 50, "学生%d", i + 1);
}
free(students);
students = NULL;
}
