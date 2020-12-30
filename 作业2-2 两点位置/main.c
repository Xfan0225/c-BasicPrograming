//
//  main.c
//  作业2-2 两点位置
//
//  Created by 谢 on 2019/9/27.
//  Copyright © 2019 谢. All rights reserved.
//作业2

#include <stdio.h>

int main() {
    int i;
    float x0,y0,x1,y1,x,y;
    for (i=1; i<=3; i++) {
        printf("测试数据组%d\n",i);
        printf("请输入第一个点，用逗号分隔：");
        scanf("%f,%f",&x0,&y0);
        printf("请输入第二个点，用逗号分隔：");
        scanf("%f,%f",&x1,&y1);
        x = (x0+x1)/2;
        y = (y0+y1)/2;
        printf("中点为：(%.2f,%.2f)\n",x,y);
    }
    return 0;
}
