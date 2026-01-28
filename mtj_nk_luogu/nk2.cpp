#include <bits/stdc++.h>
using namespace std;

int main() {
    // 隐式转换
    int a = 5;
    double b = a; 
	cout<<a<<b;
	 // int转double
    
    // 显式转换
    double c = 3.14;
    int d = (int)c;  // double转int，结果为3
    cout<<c<<d;
    
    // 字符串转数值
    string str = "123";
    int f = stoi(str);  // 字符串转int
    double g = stod("3.14");  
	cout<<str<<f<<g;
	// 字符串转double
    
    // 数值转字符串
    string h = to_string(42);
	cout<<h;
	  // 数值转字符串
    
    return 0;
}
