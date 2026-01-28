#include<iostream>
#include<cstring>
using namespace std;

class Student{
private:
    char name[20];
    int age;
    char id[15];
public:
    void registerStudent(const char* n, int a, const char* i){
        strcpy(name, n);
        age = a;
        strcpy(id, i);
    }
    void display(){
        cout << "Name: " << name << ", Age: " << age << ", ID: " << id << endl;
    }
};

int main(){
    Student stu;
    stu.registerStudent("Alice", 20, "S12345678");
    stu.display();
    return 0;
}