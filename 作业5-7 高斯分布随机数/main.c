//
//  main.c
//  作业5-7 高斯分布随机数
//
//  Created by 谢 on 2019/10/26.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define PI 3.141592653589

int main() {
    int i,miu,kesai,n;
    double x[100000],y[100000];
    float num;
    double ans;
    srand(time(NULL));
    printf("请输入μ与σ:");
    scanf("%d%d",&miu,&kesai);
    printf("请输入想生成的数据数:");
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        num = (rand()%20001-10000)/2500.0;
        ans = (1.0/(pow(PI, 0.5)*kesai))*exp((-pow(num-miu, 2))/(2*pow(kesai, 2)));
        x[i] = num;
        y[i] = ans;
    }
    printf("x:\n");
    for (i=0; i<n; i++) {
        printf("%f\n",x[i]);
    }
    printf("y:\n");
    for (i=0; i<n; i++) {
        printf("%f\n",y[i]);
    }
    return 0;
}
