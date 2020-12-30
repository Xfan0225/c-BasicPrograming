//
//  main.c
//  作业3-9 时间转换
//
//  Created by 谢 on 2019/10/11.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int hour,min,i;
    for (i=0; i<5; i++) {
        printf("测试数据%d\n",i+1);
        scanf("%d:%d",&hour,&min);
        if (min>=60||hour<0||hour>=24||min<0){
            printf("INPUT ERROR\n");
        }
        else if (hour>12&&hour<24) {
            if (min == 0) {printf("%d:00PM\n",hour-12);}
            else if (min<10) {printf("%d:0%dPM\n",hour-12,min);}
            else {printf("%d:%dPM\n",hour-12,min);}
        }
        else if (hour<=12&&hour>=0){
            if (hour==12&&min==0) {printf("12:00AM\n");}
            else if (min==0){printf("%d:00AM\n",hour);}
            else if (min<10){printf("%d:0%dAM\n",hour,min);}
            else {printf("%d:%dAM\n",hour,min);}
        }
        else {
            printf("INPUT ERROR\n");
        }
    }
    return 0;
}
