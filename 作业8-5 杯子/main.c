//
//  main.c
//  作业8-5 杯子
//
//  Created by 谢 on 2019/11/15.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

void liquid(int total, int *gallons, int *quarts, int *pints, int *cups){
    int g,q,p,c;
    g = total/16;
    total -= (total/16)*16;
    q = total/4;
    total -= (total/4)*4;
    p = total/2;
    total -= (total/2)*2;
    c = total;
    *gallons = g;
    *quarts = q;
    *pints = p;
    *cups = c;
}

int main() {
    int gallons,quarts,pints,cups,total;
    scanf("%d",&total);
    liquid(total, &gallons, &quarts, &pints, &cups);
    printf("该杯水可以分为：%d加仑%d夸脱%d品脱%d杯\n",gallons,quarts,pints,cups);
    return 0;
}
