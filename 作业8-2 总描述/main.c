//
//  main.c
//  作业8-2 总描述
//
//  Created by 谢 on 2019/11/15.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
void secs(long* totsec, int hour,int min,int sec){
    long tots=0;
    tots += 3600*hour+60*min+sec;
    *totsec = tots;
}

int main() {
    long totsec;
    int hour,min,sec;
    scanf("%d%d%d",&hour,&min,&sec);
    secs(&totsec, hour, min, sec);
    printf("总秒数：%ld\n", totsec);
    return 0;
}

    

