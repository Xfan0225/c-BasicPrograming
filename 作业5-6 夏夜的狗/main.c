//
//  main.c
//  作业5-6 夏夜的狗
//
//  Created by 谢 on 2019/10/25.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int distance=10,i,stay=0,home=0,rd,j;
    srand((unsigned) (time(NULL)));
    for (j=1; j<4; j++) {
        printf("测试%d\n",j);
        for (i=0; i<500; i++) {
            distance = 10;
            while (1) {
                rd = rand();
                if (rd%2==0) {
                    distance -= 2;
                }
                else if(rd%2==1){
                    distance += 1;
                }
                if (distance<=0) {
                    home += 1;
                    break;
                }
                else if (distance==10){
                    stay += 1;
                    break;
                }
            }
        }
        printf("到家百分比：%.2f%%\n",home/500.0*100);
        home = 0;
    }
    return 0;
}
