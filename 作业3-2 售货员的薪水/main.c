//
//  main.c
//  作业3-2 售货员的薪水
//
//  Created by 谢 on 2019/10/10.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int i;
    char status;
    for (i=0; i<2; i++) {
        printf("测试数据%d\n",i+1);
        scanf("\n%c",&status);
        if (status == 's') {
            printf("薪水：每周800美元\n");
        }
        else{
            printf("薪水：每周375美元\n");
        }
    }
    return 0;
}
