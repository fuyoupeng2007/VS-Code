#include <iostream>
using namespace std;

void byValue(int x) {
    x = x + 10;  // 只修改复印件
    cout << "函数内 x = " << x << endl;
}

void byPointer(int* x) {
    *x = *x + 10;  // 通过地址修改原值
    cout << "函数内 *x = " << *x << endl;
}

void byReference(int& x) {
    x = x + 10;  // 直接修改原值
    cout << "函数内 x = " << x << endl;
}

int main() {
    int a = 5;

    cout << "原始值 a = " << a << endl;

    byValue(a);
    cout << "按值传递后 a = " << a << endl;  // a 不变

    byPointer(&a);  // 传递a的地址
    cout << "按指针传递后 a = " << a << endl;  // a 变了

    byReference(a);
    cout << "按引用传递后 a = " << a << endl;  // a 变了

    return 0;
}
