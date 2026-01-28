#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string S = "";
    int i = 1;

    while (S.length() < n) {
        S += to_string(i);
        i++;
    }

    cout << S[n - 1] << endl; // 注意下标是 n-1
    return 0;
}

