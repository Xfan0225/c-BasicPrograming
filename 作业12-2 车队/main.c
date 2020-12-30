//
//  main.c
//  作业12-2 车队
//
//  Created by 谢 on 2019/12/16.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int i;
    double totalfuel=0,totaldistance=0;
    struct carteam{
        int carnumber;
        int distance;
        int fuel;
    } car[5];
    for (i=0; i<5; i++) {
        printf("Please enter the message:");
        scanf("%d%d%d",&car[i].carnumber,&car[i].distance,&car[i].fuel);
        totalfuel += car[i].fuel;
        totaldistance += car[i].distance;
    }
    printf("number\t\tdistance\tfuel\n");
    for (i=0; i<5; i++) {
        printf("%d\t\t\t%d\t\t%d\n",car[i].carnumber,car[i].distance,car[i].fuel);
    }
    printf("distance per gallon:%.2f\n",totaldistance/totalfuel);
    return 0;
}



