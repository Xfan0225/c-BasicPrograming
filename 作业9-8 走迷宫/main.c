//
//  main.c
//  作业9-8 走迷宫
//
//  Created by 谢 on 2019/11/23.
//  Copyright © 2019 谢. All rights reserved.
//作业9-8

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char map[15][15];   //行走地图，被定义为全局变量
int vic[4],val='A',x=0,y=0; //vic代表被堵情况，val为填入字母，xy为坐标

int is_block(int i,int j){    //判断某一点是否可行
    if (i<0||i>10||j<0||j>10) {
        return 1;
    }
    else if (map[i][j]!='.'){
        return 1;
    }
    else{
        return 0;
    }
}

void block_test(int i,int j){ //判断某一点上下左右被堵情况，被堵为1
    int k;
    for (k=0; k<4; k++) {
        vic[k] = 0;
    }
    if (is_block(i-1, j)) { //左边被堵
        vic[0] = 1;
    }
    if (is_block(i+1, j)) { //右边被堵
        vic[1] = 1;
    }
    if (is_block(i, j+1)) { //上被堵
        vic[2] = 1;
    }
    if (is_block(i, j-1)) { //下被堵
        vic[3] = 1;
    }
}

void go(int i,int j,int dir){ //行进函数，i，j为坐标，dir为行进方向
    if (dir==0) { //向左
        map[i-1][j] = val++;
        x--;
    }
    else if (dir==1){ //向右
        map[i+1][j] = val++;
        x++;
    }
    else if (dir==2){ //向上
        map[i][j+1] = val++;
        y++;
    }
    else if (dir==3){ //向下
        map[i][j-1] = val++;
        y--;
    }
}

int main() {
    int i,j,k,l,count=0,judge;
    srand((unsigned)time(NULL));
    for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            map[i][j] = '.';
        }
    }
    for (k=0; k<26; k++) {
        if (k==0) {        //赋初值
            map[0][0] = val++;
        }
        else{
            block_test(x, y);    //先对出发点进行可行测试
            count = 0;
            for (l=0; l<4; l++) {
                if (vic[l]==1) {        //统计被堵数目
                    count++;
                }
            }
            if (count==4) {    //被堵数目=4，说明走入死路，提前结束程序
                for (i=0; i<10; i++) {
                    printf("%s\n",map[i]);
                }
                printf("死路\n");
                return 0;
            }
            judge = rand()%(4-count); //judge表示随机第几个可行点走
            count=0;
            for (l=0; l<4; l++) {
                //如果到第judge个可行点就走
                if (count==judge&&vic[l]==0) {
                    go(x, y, l);
                    break;
                }
                //如果还没到第judge个可行点，计数器+1
                if (vic[l]==0) {
                    count++;
                }
            }
            count=0;
        }
    }
    for (i=0; i<10; i++) {    //程序未提前结束，输出最终结果
        printf("%s\n",&map[i]);
    }
    return 0;
}
