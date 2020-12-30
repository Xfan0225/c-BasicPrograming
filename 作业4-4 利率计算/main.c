//
//  main.c
//  作业4-4 利率计算
//
//  Created by 谢 on 2019/10/18.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    float money=1000;
    int rate,year;
    printf("rt/y\t");
    for (year=1; year<11; year++) {
        printf("%d\t\t",year);
    }
    printf("\n");
    for (rate=6; rate<13; rate++) {
        printf("%d%%\t\t",rate);
        for (year=1; year<11; year++) {
            money *= (1+rate/100.0);
            printf("%.2f\t",money);
        }
        money = 1000;
        printf("\n");
    }
    return 0;
}
