#include <iostream>
#include <string>
#include <vector> // 虽然本题可以直接边读边比较，但用 vector 存一下也可以

struct Student {
    std::string name;
    int chinese;
    int math;
    int english;
    int total_score;

    // 构造函数方便创建
    Student(std::string n="", int c=0, int m=0, int e=0) : name(n), chinese(c), math(m), english(e) {
        total_score = c + m + e;
    }

    int getTotalScore() const { return total_score; }

    // 输出学生信息的方法
    void printInfo() const {
        std::cout << name << " " << chinese << " " << math << " " << english << std::endl;
    }
};

int main() {
    int n;
    std::cin >> n;

    Student best_student; // 用于存储最终结果
    int max_total_score = -1; // 初始化一个不可能达到的低分数

    for (int i = 0; i < n; ++i) {
        std::string current_name;
        int current_chinese, current_math, current_english;
        std::cin >> current_name >> current_chinese >> current_math >> current_english;

        // 创建当前学生对象
        Student current_student(current_name, current_chinese, current_math, current_english);
        int current_total = current_student.getTotalScore();

        // 核心比较逻辑
        if (current_total > max_total_score) {
            max_total_score = current_total;
            best_student = current_student; // 更新最优学生
        }
        // 如果 current_total == max_total_score，根据题意，不做任何事
    }

    // 输出最终找到的最厉害的学生信息
    best_student.printInfo();

    return 0;
}
