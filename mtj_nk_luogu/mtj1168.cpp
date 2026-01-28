#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    // 特殊情况：1是0!或1!
    if (N == 1) {
        printf("YES");
        return 0;
    }
    
    long long factorial = 1; // 用long long防止整数溢出
    for (int i = 2; ; i++) {
        factorial *= i;
        if (factorial == N) {
            printf("YES");
            return 0;
        } else if (factorial > N) {
            printf("NO");
            return 0;
        }
    }
    
    return 0;
}

