//
//  main.c
//  作业8-7 最大值
//
//  Created by 谢 on 2019/11/15.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

void larger_of(double *x, double *y){
    if (*x>*y) {
        *y = *x;
    }
    else
        *x = *y;
}
int main() {
    double x,y;
    scanf("%lf%lf",&x,&y);
    larger_of(&x, &y);
    printf("x:%.2f y:%.2f\n",x,y);
    return 0;
}
