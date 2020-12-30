//
//  main.c
//  作业12-1 股票结构体
//
//  Created by 谢 on 2019/12/16.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    struct stock{
        char name[20];
        double reward;
        int rate;
    }val[5];
    for (i=0; i<5; i++) {
        scanf("%s%lf%d",&val[i].name,&val[i].reward,&val[i].rate);
    }
    for (i=0; i<5; i++) {
        printf("reward of %s:%.2f\n",val[i].name,val[i].reward*val[i].rate);
    }
    return 0;
}
