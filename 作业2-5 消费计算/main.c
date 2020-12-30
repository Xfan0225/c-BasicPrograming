//
//  main.c
//  作业2-5 消费计算
//
//  Created by 谢 on 2019/9/27.
//  Copyright © 2019 谢. All rights reserved.
//作业5

#include <stdio.h>

int main() {
    double price,amount,discount,sumprc,sumdsc,sumtax,sumpay;
    printf("请输入购买价格：");
    scanf("%lf",&price);
    printf("请输入购买数量：");
    scanf("%lf",&amount);
    printf("请输入折扣率百分数：");
    scanf("%lf",&discount);
    sumprc = price*amount;
    sumdsc = sumprc - discount*sumprc*0.01;
    sumtax = sumprc*0.06;
    sumpay = sumprc+sumtax;
    printf("总价格：\t\t%.2lf\n",sumprc);
    printf("折扣后总数：\t%.2lf\n",sumdsc);
    printf("应付税额：\t%.2lf\n",sumtax);
    printf("应付款项：\t%.2lf\n",sumpay);
    return 0;
}
