//
//  main.c
//  作业6-7 猴子吃桃子
//
//  Created by 谢 on 2019/11/1.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i,j,ans=1;
    for (j=1; j<4; j++) {
        printf("测试数据%d\n",j);
        scanf("%d",&n);
        for (i=0; i<n; i++) {
            ans = (ans+1)*2;
        }
        printf("最初的桃子数：%d\n",ans);
        ans = 1;
    }
    
    return 0;
}
