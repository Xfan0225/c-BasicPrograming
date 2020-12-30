//
//  main.c
//  作业2-1
//
//  Created by 谢 on 2019/9/27.
//  Copyright © 2019 谢. All rights reserved.
//作业1

#include <stdio.h>

int main() {
    float a=10.6,b=13.10,c=-3.42;
    //a-b=25;
    a-(b=25);
    printf("a=%.2f,b=%.2f,c=%.2f\n",a,b,c);
    return 0;
}
