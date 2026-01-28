#include<stdio.h>
int main() 
{ 
    int n[200] = {0};
    int i = 0;
    
    // 输入数据
    while(1){
        scanf("%d", &n[i]);  // 去掉了格式字符串中的多余空格
        if(n[i] == -9999) break;
        i++;
    }

    // 检查重复
    for(int j = 0; j < i; j++){  // 从第一个元素开始遍历
        int cnt = 0;  // 每次检查新元素时重置计数器
        for(int k = j+1; k < i; k++){  // 只检查后面元素
            if(n[k] == n[j]){
                printf("%d ", j+1);  // 输出编号从1开始
                cnt++;
                break;  // 找到第一个重复即可退出
            }
        }
        if(cnt == 0){
            printf("no such number ");
        }
    }
    return 0; 
}

