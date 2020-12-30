//
//  main.c
//  作业6-4 解方程
//
//  Created by 谢 on 2019/11/1.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int x,y,z,count=0;
    for (x=0; x<=5; x++) {
        for (y=0; y<=5; y++) {
            for (z=0; z<=9; z++) {
                if ((x+y)*100+(y+z)*10+z*2==532) {
                    printf("x:%d\ty:%d\tz:%d\n",x,y,z);
                    count++;
                }
            }
        }
    }
    printf("解法总数：%d\n",count);
    return 0;
}
