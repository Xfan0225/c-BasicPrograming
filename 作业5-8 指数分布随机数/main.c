//
//  main.c
//  作业5-8 指数分布随机数
//
//  Created by 谢 on 2019/10/26.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int i,lamuda,n;
    double x[100000],y[100000];
    float num;
    double ans;
    srand(time(NULL));
    printf("请输入λ:");
    scanf("%d",&lamuda);
    printf("请输入想生成的数据数:");
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        num = (rand()%20000+1)/4500.0;
        ans = lamuda*exp(-1.0*lamuda*num);
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
