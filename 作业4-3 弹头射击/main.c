//
//  main.c
//  作业4-3 弹头射击
//
//  Created by 谢 on 2019/10/18.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main() {
    float angle=22.8*PI/180,x,y;
    int t,v=500;
    printf("x\t\ty\t\tt\t\n");
    for (t=0; t<21; t++) {
        x = v*t/2*cosf(angle);
        y = v*t/2*sinf(angle);
        printf("%.2f\t%.2f\t%.2f\n",x,y,t*0.5);
    }
    return 0;
}
