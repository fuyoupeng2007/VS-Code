#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// 首先定义结构体
struct student {
    char name[20];
    char sex;
    float score[4];
    float average;
};

// 函数声明（注意参数类型）
void input1(struct student* stu, int n);
float compute1(struct student* stu, int n);
void sort1(struct student* stu, int n);
void output1(struct student* stu, int n, float class_average);  // 修改为float

int main() {
    int n;
    struct student* stu;
    float class_average;
    printf("Please input the number of students:");
    scanf("%d", &n);
    stu = (struct student*)malloc(n * sizeof(struct student));
    input1(stu, n);
    class_average = compute1(stu, n);
    output1(stu, n, class_average);
    free(stu);
    return 0;
}

void input1(struct student* stu, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        printf("Please input the name of student %d:", i + 1);
        scanf("%s", stu[i].name);
        printf("Please input the sex of student %d(M/F):", i + 1);
        scanf(" %c", &stu[i].sex);  // 注意%c前面的空格，用于跳过空白字符
        for (j = 0; j < 4; j++) {
            printf("Please input the score %d of student %d:", j + 1, i + 1);
            scanf("%f", &stu[i].score[j]);
        }
    }
}

float compute1(struct student* stu, int n) {
    int i, j;
    float all_average = 0.0;
    for (i = 0; i < n; i++) {
        float total = 0.0;
        for (j = 0; j < 4; j++) {
            total += stu[i].score[j];
        }
        stu[i].average = total / 4.0;
        all_average += stu[i].average;
    }
    float class_average = all_average / n;
    return class_average;
}

void sort1(struct student* stu, int n) {
    int i, j;
    struct student temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (stu[j].average < stu[j + 1].average) {
                temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }
}

void output1(struct student* stu, int n, float class_average) {  // 参数类型改为float
    int i, j;
    sort1(stu, n);
    printf("Name\tScore1\tScore2\tScore3\tScore4\tAverage\n");
    for (i = 0; i < n; i++) {
        if (stu[i].sex == 'M' && stu[i].average >= class_average) {
            printf("%s\t", stu[i].name);
            for (j = 0; j < 4; j++) {
                printf("%.2f\t", stu[i].score[j]);  // 使用%.2f输出浮点数
            }
            printf("%.2f\n", stu[i].average);  // 使用%.2f输出平均分
        }
    }
}
