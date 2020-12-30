//
//  main.c
//  作业1-5 计算圆面积
//
//  Created by 谢 on 2019/9/19.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main() {
    float radius=2.57, area, pi=3.1416;
    area = pi*powf(radius, 2);
    printf("%.5f\n",area);
    return 0;
}
