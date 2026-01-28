#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> vec;
    int n, i, x, count;
    string operation;

    cin >> count;  // 输入操作的次数

    while (count--) {
        cin >> operation;

        if (operation == "1") {
            cin >> x;
            vec.push_back(x);  // 向序列末尾增加一个数
        }
        else if (operation == "2") {
            vec.pop_back();  // 删掉序列末尾的数
        }
        else if (operation == "3") {
            cin >> i;
            cout << vec[i] << endl;  // 输出序列中第 i 个数
        }
        else if (operation == "4") {
            cin >> i >> x;
            vec.insert(vec.begin() + i, x);  // 插入数 x 在第 i 和 i + 1 之间
        }
        else if (operation == "5") {
            sort(vec.begin(), vec.end());  // 升序排序
        }
        else if (operation == "6") {
            sort(vec.begin(), vec.end(), greater<int>());  // 降序排序
        }
        else if (operation == "7") {
            cout << vec.size() << endl;  // 输出序列的长度
        }
        else if (operation == "8") {
            for (int v : vec) {
                cout << v << " ";  // 输出整个序列
            }
            cout << endl;
        }
    }
    return 0;
}

