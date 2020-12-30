//
//  main.c
//  作业8-6 总天数
//
//  Created by 谢 on 2019/11/15.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

void yrCalc(int *year, int *month, int *day, long *totalday){
    int y,m,d;
    long t;
    y = *year - 1900;
    m = *month - 1;
    d = *day - 1;
    t = y*365+m*30+d;
    *totalday = t;
    
}
int main() {
    int year,month,day;
    long totalday;
    scanf("%d%d%d",&year,&month,&day);
    yrCalc(&year, &month, &day, &totalday);
    printf("%ld\n",totalday);
    return 0;
}
