//
//  main.c
//  作业12-3 结构体总天数
//
//  Created by 谢 on 2019/12/16.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

struct Date{
    int month;
    int day;
    int year;
} t;

long days(struct Date time);

int main() {
    scanf("%d%d%d",&t.year,&t.month,&t.day);
    printf("%ld\n",days(t));
    return 0;
}

#include <stdio.h>
long days(struct Date t){
    long total=0;
    total = t.year*360+t.month+30+t.day;
    return total;
}
