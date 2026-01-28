#include <stdio.h>
#include <string.h>

// 宏定义：学生人数和课程数（按解析要求设为30个学生，4门课程）
#define STUDENT_NUM 3
#define COURSE_NUM 4

// 定义学生结构体，存储姓名、性别、成绩、平均分
typedef struct {
    char name[20];        // 学生姓名
    char gender;          // 性别（'M'表示男，'F'表示女）
    int scores[COURSE_NUM]; // 4门课程成绩：数学、物理、英语、计算机
    float avg;            // 平均分
} Student;

// 函数声明：按平均分升序排序学生数组
void sortStudents(Student stu[], int n);

int main() {
    Student students[STUDENT_NUM]; // 定义存储30个学生的结构体数组
    int i, j;
    int sum; // 临时存储单名学生的总分

    // 1. 输入学生信息并计算平均分
    for (i = 0; i < STUDENT_NUM; i++) {
        printf("请输入第%d个学生的信息（姓名 性别 数学 物理 英语 计算机）：\n", i + 1);
        // 输入格式：姓名（无空格） 性别（单个字符） 四门成绩（整数）
        scanf("%s %c %d %d %d %d", 
              students[i].name, 
              &students[i].gender, 
              &students[i].scores[0], 
              &students[i].scores[1], 
              &students[i].scores[2], 
              &students[i].scores[3]);
        
        // 计算总分
        sum = 0;
        for (j = 0; j < COURSE_NUM; j++) {
            sum += students[i].scores[j];
        }
        // 计算平均分（强制浮点型转换，避免整数除法）
        students[i].avg = sum / (float)COURSE_NUM;
    }

    // 2. 按平均分升序排序学生数组
    sortStudents(students, STUDENT_NUM);

    // 3. 筛选并输出平均分低于80分的学生（按升序排列）
    printf("\n=========================================\n");
    printf("平均分低于80分的学生（按平均分升序）：\n");
    printf("姓名\t性别\t数学\t物理\t英语\t计算机\t平均分\n");
    printf("-----------------------------------------\n");
    int hasLowScore = 0; // 标记是否有低于80分的学生
    for (i = 0; i < STUDENT_NUM; i++) {
        if (students[i].avg < 80) {
            hasLowScore = 1;
            // 按格式输出，平均分保留2位小数
            printf("%s\t%c\t%d\t%d\t%d\t%d\t%.2f\n",
                   students[i].name,
                   students[i].gender,
                   students[i].scores[0],
                   students[i].scores[1],
                   students[i].scores[2],
                   students[i].scores[3],
                   students[i].avg);
        }
    }
    if (!hasLowScore) {
        printf("暂无平均分低于80分的学生！\n");
    }
    printf("=========================================\n");

    return 0;
}

// 冒泡排序实现：按学生平均分升序排列
void sortStudents(Student stu[], int n) {
    int i, j;
    Student temp; // 结构体临时变量，用于交换学生信息
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // 前一个学生平均分 > 后一个，交换两者位置（升序）
            if (stu[j].avg > stu[j + 1].avg) {
                temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }
}

