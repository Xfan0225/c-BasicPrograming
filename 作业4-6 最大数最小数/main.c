//
//  main.c
//  作业4-6 最大数最小数
//
//  Created by 谢 on 2019/10/19.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    float min=10000,max=0,inp;
    while (1) {
        scanf("%f",&inp);
        if (inp<=0) {
            break;
        }
        if (inp>max) {
            max = inp;
        }
        if (inp<min){
            min = inp;
        }
    }
    printf("max:%.2f\nmin:%.2f\n",max,min);
    return 0;
}
