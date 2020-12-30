//
//  main.c
//  作业9-1 价格计算
//
//  Created by 谢 on 2019/11/22.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int price[10],quantity[10],amount[10],i;
    for (i=0; i<10; i++) {
        scanf("%d%d",&price[i],&quantity[i]);
        amount[i] = price[i]*quantity[i];
    }
    printf("Quantity\tPrice\tAmount\n");
    printf("--------\t-----\t------\n");
    for (i=0; i<10; i++) {
        printf("%d\t\t\t%d\t\t%d\n",quantity[i],price[i],amount[i]);
    }
    return 0;
}
