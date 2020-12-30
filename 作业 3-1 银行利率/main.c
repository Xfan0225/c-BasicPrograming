//
//  main.c
//  作业 3-1 银行利率
//
//  Created by 谢 on 2019/10/10.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n[2],i;
    for (i=0; i<2; i++) {
        printf("测试数据%d\n",i+1);
        scanf("%d",&n[i]);
        if (n[i]<=5) {
            printf("the profit is 5.4%% \n");
        }
        else if (n[i]>5){
            printf("the profit is 7.5%% \n");
        }
    }
    return 0;
}
