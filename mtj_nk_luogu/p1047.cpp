#include <stdio.h>

int main(void) {
    int l, m;
    scanf("%d %d", &l, &m);
    
    // 初始化路段数组，0表示未覆盖，1表示已覆盖
    int road[1001] = {0}; // 假设l最大为1000，可根据题目范围调整
    
    for (int i = 0; i < m; i++) {
        int b, o;
        scanf("%d %d", &b, &o);
        
        // 标记区间[b, o]为已覆盖（注意：题目中路段是否包含端点需确认，此处按闭区间处理）
        for (int j = b; j <= o; j++) {
            if (j <= l) { // 防止区间超出路段范围（如o > l）
                road[j] = 1;
            }
        }
    }
    
    // 统计未覆盖的长度（即road[j]为0的个数）
    int uncovered = 0;
    for (int j = 0; j <= l; j++) {
        if (road[j] == 0) {
            uncovered++;
        }
    }
    
    printf("%d\n", uncovered);
    return 0;
}

