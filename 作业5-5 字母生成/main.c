//
//  main.c
//  作业5-5 字母生成
//
//  Created by 谢 on 2019/10/25.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1=0,num2=0,i,tm;
    long long j=1;
    tm = (int)time(NULL);
    for (i=1; i<4; i++) {
        printf("测试运行%d\n",i);
        srand(tm);
        while (1) {
            num2 = rand()%26+1;
            if (num1==1&&num2==20) {
                printf("出现单词:at, 字母总数：%lld\n",j);break;
            }
            else if (num1==9&&num2==19){
                printf("出现单词:is, 字母总数：%lld\n",j);break;
            }
            else if (num1==8&&num2==5){
                printf("出现单词:he, 字母总数：%lld\n",j);break;
            }
            else if (num1==23&&num2==5){
                printf("出现单词:we, 字母总数：%lld\n",j);break;
            }
            else if (num1==21&&num2==16){
                printf("出现单词:up, 字母总数：%lld\n",j);break;
            }
            else if (num1==15&&num2==14){
                printf("出现单词:on, 字母总数：%lld\n",j);break;
            }
            else{
                j++;
                tm++;
                num1 = num2;
            }
        }
        j=0;
        num1 = 0;
        num2 = 0;
    }
    return 0;
}
