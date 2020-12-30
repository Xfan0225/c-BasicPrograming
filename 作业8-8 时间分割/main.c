//
//  main.c
//  作业8-8 时间分割
//
//  Created by 谢 on 2019/11/15.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

void split_time(long *total_sec, int *hour, int *min, int *sec){
    long tm;
    tm = *total_sec;
    *hour = tm/1440;
    tm -= (tm/1440)*1440;
    *min = tm/60;
    tm -= (tm/60)*60;
    *sec = tm;
}

int main() {
    long total_sec;
    int hour,min,sec;
    scanf("%ld",&total_sec);
    split_time(&total_sec, &hour, &min, &sec);
    printf("%d:%d:%d\n",hour,min,sec);
    return 0;
}
