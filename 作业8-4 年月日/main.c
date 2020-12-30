//
//  main.c
//  作业8-4 年月日
//
//  Created by 谢 on 2019/11/15.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void split(char* time,int *year,int *month,int *day){
    int i,y=0,m=0,d=0,val;
    for (i=0; i<8; i++) {
        if (i<4) {
            val = time[i]-48;
            y += val*pow(10, 3-i);
        }
        else if (i<6) {
            val = time[i]-48;
            m += val*pow(10, 5-i);
        }
        else{
            val = time[i]-48;
            d += val*pow(10, 7-i);
        }
    }
    *year = y;
    *month = m;
    *day = d;
}

int main() {
    char time[10];
    int year,month,day;
    scanf("%s",&time);
    split(time, &year, &month, &day);
    printf("year:%d month:%d day:%d\n",year,month,day);
    return 0;
}
