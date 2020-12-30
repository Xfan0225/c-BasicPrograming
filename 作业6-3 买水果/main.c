//
//  main.c
//  作业6-3 买水果
//
//  Created by 谢 on 2019/11/1.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#define gram 100

int main() {
    int apple=0,pear=0,melon=0,i,count=0;
    float money=0;
    printf("Apple\tPear\tMelon\tCost\n");
    for (pear=1; pear<=100; pear++) {
        apple = (100-pear)/10;
        for (i=1; i<=apple; i++) {
            melon = gram-i-pear;
            money = pear*0.4+melon*0.2+i*4;
            if (money<=40&&i!=0) {
                printf("%d\t\t%d\t\t%d\t\t%.1f\n",i,pear,melon,money);
                count++;
            }
        }
    }
    printf("总方法数：%d\n",count);
    return 0;
}

