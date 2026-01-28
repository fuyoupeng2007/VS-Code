#include <iostream>
#include <string>
using namespace std;

// 定义结构体
struct Student {
    string name;
    int id;
    float gpa;
};

int main() {
    // 初始化结构体变量
    Student s1 = {"张三", 2023001, 3.8};
    Student s2;
    s2.name = "李四";
    s2.id = 2023002;
    s2.gpa = 3.5;

    // 结构体数组应用
    Student classA[3] = {
        {"王五", 2023003, 3.6},
        {"赵六", 2023004, 3.9},
        {"陈七", 2023005, 3.2}
    };

    // 遍历输出
    for(int i=0; i<3; ++i) {
        cout << "学生：" << classA[i].name 
             << "\tGPA：" << classA[i].gpa << endl;
    }
    return 0;
}

