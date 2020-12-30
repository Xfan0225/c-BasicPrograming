//
//  main.c
//  作业3-7 软盘驱动器
//
//  Created by 谢 on 2019/10/11.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int i,n;
    for (i=0; i<4; i++) {
        printf("测试数据%d\n",i+1);
        scanf("%d",&n);
        switch (n) {
            case 1:
                printf("3M公司\n");
                break;
            case 2:
                printf("万胜公司\n");
                break;
            case 3:
                printf("索尼公司\n");
                break;
            case 4:
                printf("威宝公司\n");
                break;
        }
    }
    return 0;
}
