//
//  main.c
//  作业12-4 更大的天数
//
//  Created by 谢 on 2019/12/16.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

struct Date{
    int month;
    int day;
    int year;
} t[3];

long days(struct Date time);
struct Date larger(struct Date day1,struct Date day2);

int main() {
    int i;
    printf("please enter two dates:\n");
    for (i=0; i<2; i++) {
        scanf("%d%d%d",&t[i].year,&t[i].month,&t[i].day);
    }
    t[2] = larger(t[0], t[1]);
    printf("Larger date is:%d.%d.%d\n",t[2].year,t[2].month,t[2].day);
    return 0;
}

long days(struct Date t){
    long total=0;
    total = t.year*360+t.month+30+t.day;
    return total;
}

struct Date larger(struct Date day1,struct Date day2){
    if (days(day1)>days(day2)) {
        return day1;
    }
    else
        return day2;
}
