//
//  main.c
//  作业5-3 PI
//
//  Created by 谢 on 2019/10/25.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <math.h>

double cal_PI(int n){
    int i,j=2;
    double pi=0;
    for (i=1; i<=2*n-1; i+=2) {
        pi += pow(-1, j)*(1.0/i)*(1.0/pow(2, i)+1.0/pow(3, i));
        j++;
    }
    return pi*4.0;
}

int main() {
    int i,n;
    double pi;
    for (i=1; i<=3; i++) {
        printf("测试数据%d\n",i);
        printf("请输入你想要计算的迭代次数：");
        scanf("%d",&n);
        pi = cal_PI(n);
        printf("PI=%.20lf\n",pi);
    }
    return 0;
}

