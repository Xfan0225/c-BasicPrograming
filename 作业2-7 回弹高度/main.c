//
//  main.c
//  作业2-7 回弹高度
//
//  Created by 谢 on 2019/9/27.
//  Copyright © 2019 谢. All rights reserved.
//作业7

#include <stdio.h>
#include <math.h>
int main() {
    int i;
    double height,g0=9.81,g1=1.67,v0,v1,h0[5],h1[5];
    printf("请输入下落高度：");
    scanf("%lf",&height);
    h0[0] = height;
    h1[0] = height;
    printf("在地球上时的情况如下\n");
    for (i=0; i<3; i++) {
        height = h0[i];
        v0 = sqrt(2*g0*height);
        h0[i+1] = h0[i]*2/3;
        printf("第%d次下落：速度：%.2lf 回弹高度：%.2lf\n",i+1,v0,h0[i+1]);
    }
    printf("在月球上时的情况如下\n");
    for (i=0; i<3; i++) {
        height = h1[i];
        v1 = sqrt(2*g1*height);
        h1[i+1] = h1[i]*2/3;
        printf("第%d次下落：速度：%.2lf 回弹高度：%.2lf\n",i+1,v1,h1[i+1]);
    }
    return 0;
}
