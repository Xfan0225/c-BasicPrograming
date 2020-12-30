//
//  main.c
//  作业8-3
//
//  Created by 谢 on 2019/11/15.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

void timeing(int totsec, double *hour, double *min, double *sec){
    double h,m,s;
    h = totsec/3600.0;
    m = totsec/60.0;
    s = totsec;
    *hour = h;
    *min = m;
    *sec = s;
}

int main() {
    double hour,min,sec;
    int totsec;
    scanf("%d",&totsec);
    timeing(totsec, &hour, &min, &sec);
    printf("hours is: %.2f\nmin is:%.2f\nsec is:%.2f\n",hour,min,sec);
    return 0;
}
