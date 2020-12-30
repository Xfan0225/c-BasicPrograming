//
//  main.c
//  作业2-3 四次方根
//
//  Created by 谢 on 2019/9/27.
//  Copyright © 2019 谢. All rights reserved.
//作业3

#include <stdio.h>
#include <math.h>
int main() {
    int i;
    double x,ans;
    for (i=1; i<7; i++) {
        printf("测试数据%d：",i);
        scanf("%lf",&x);
        ans = pow(x, 0.25);
        printf("开四次方根后%lf\n",ans);
    }
    return 0;
}
