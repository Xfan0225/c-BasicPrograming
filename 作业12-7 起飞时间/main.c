//
//  main.c
//  作业12-7 起飞时间
//
//  Created by 谢 on 2019/12/16.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct t{
    int left;
    int arrive;
};

void changetime(int *ls,int left,int arrive){
    *ls = left/60;
    *(ls+1) = left-(left/60)*60;
    *(ls+2) = arrive/60;
    *(ls+3) = arrive-(arrive/60)*60;
}

void printtime(int hour,int min){
    if (hour>12&&hour<24) {
        if (min == 0) {printf("%d:00 p.m.",hour-12);}
        else if (min<10) {printf("%d:0%d p.m.",hour-12,min);}
        else {printf("%d:%d p.m.",hour-12,min);}
    }
    else if (hour<=12&&hour>=0){
        if (hour==12&&min==0) {printf("12:00 a.m.");}
        else if (min==0){printf("%d:00 a.m.",hour);}
        else if (min<10){printf("%d:0%d a.m.",hour,min);}
        else {printf("%d:%d a.m.",hour,min);}
    }
}

int main(int argc, const char * argv[]) {
    int sum,hour,min,ans=0,i,m=10000,anstime[4];
    struct t time[9] = { {480,616},{583,712},{679,811},{767,900},{840,968},{945,1075},{1140,1280},{1305,1438} };
    printf("Enter a 24-hour time:");
    scanf("%d:%d",&hour,&min);
    sum = hour*60+min;
    for (i=0; i<9; i++) {
        if (abs(sum-time[i].left)<m) {
            m = abs(sum-time[i].left);
            ans = i;
        }
    }
    changetime(&anstime, time[ans].left, time[ans].arrive);
    printf("Closest departure time is ");
    printtime(anstime[0], anstime[1]);
    printf(", arriving at ");
    printtime(anstime[2], anstime[3]);
    printf("\n");
    return 0;
}
