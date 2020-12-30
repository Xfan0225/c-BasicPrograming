//
//  main.c
//  作业6-8 平方根计算
//
//  Created by 谢 on 2019/11/1.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main() {
    int i;
    double max,min=1.0,n = 0.0,mid=1.0;
    for (i=1; i<4; i++) {
        printf("测试数据%d\n",i);
        scanf("%lf",&n);
        max = n;
        while (max-min>=0.000000000001) {
            mid = (max+min)/2.0;
            if (pow(mid, 2)<n) {
                min = mid;
            }
            else if (pow(mid, 2)>n){
                max = mid;
            }
        }
        printf("ans is :%.10lf\n",mid);
        min = 1.0;mid=1.0;
    }
    return 0;
}
