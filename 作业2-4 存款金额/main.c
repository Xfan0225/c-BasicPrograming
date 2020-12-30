//
//  main.c
//  作业2-4 存款金额
//
//  Created by 谢 on 2019/9/27.
//  Copyright © 2019 谢. All rights reserved.
//作业4

#include <stdio.h>
#include <math.h>
int main() {
    int i;
    double ans,money,time,interest;
    for (i=1; i<=7; i++) {
        printf("测试数据%d\n",i);
        printf("请输入初始存款金额：");
        scanf("%lf",&money);
        printf("请输入存款时间：");
        scanf("%lf",&time);
        printf("请输入年利率百分数：");
        scanf("%lf",&interest);
        ans = money*pow(1.0+interest/100.0, time);
        printf("期末存款额：%.2lf\n",ans);
    }
    return 0;
}
