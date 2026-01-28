#include <stdio.h>

int main(void) {
    int ch[26] = {0};  // 统计a~z的出现次数，初始化为0
    int maxn = 0;      // 最大值初始化为0（至少有一个字母出现时会更新）
    int minn = 0;      // 最小值需在统计后初始化
    char c;
    
    while ((c = getchar()) != '\n') {  // 读取到换行符时停止
        if (c >= 'a' && c <= 'z') {    // 仅统计小写字母
            int k = c - 'a';
            ch[k]++;
        }
    }

    // 2. 计算maxn（出现次数最大值）
    for (int j = 0; j < 26; j++) {  // 索引范围0~25（a~z）
        if (ch[j] > maxn) {
            maxn = ch[j];
        }
    }

    // 3. 计算minn（出现次数最小值，仅考虑出现过的字母）
    // 先找到第一个出现的字母次数作为初始minn
    int has_char = 0;  // 标记是否有字母出现
    for (int j = 0; j < 26; j++) {
        if (ch[j] > 0) {
            minn = ch[j];
            has_char = 1;
            break;
        }
    }
    // 遍历剩余字母，更新minn
    if (has_char) {
        for (int j = 0; j < 26; j++) {
            if (ch[j] > 0 && ch[j] < minn) {
                minn = ch[j];
            }
        }
    }

    // 4. 判断并输出结果
    if (!has_char || maxn == minn) {  // 无字母输入或所有出现次数相同
        printf("No Answer\n");
    } else {
        printf("Lucky Word\n%d\n", maxn - minn);
    }

    return 0;
}

