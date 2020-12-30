//
//  main.c
//  作业3-3 三角形边长
//
//  Created by 谢 on 2019/10/10.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main() {
    int i;
    float a,b,c,area,s;
    for (i=0; i<3; i++) {
        printf("测试数据%d\n",i+1);
        scanf("%f%f%f",&a,&b,&c);
        s = (a+b+c)/2;
        area = s*(s-a)*(s-b)*(s-c);
        if (area<0) {
            printf("输入数据无法组成三角形\n");
        }
        else{
            printf("三角形的面积为：%.2f\n",sqrtf(area));
        }
    }
    return 0;
}
