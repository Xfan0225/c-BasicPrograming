//
//  main.c
//  作业11-6 Schelling模型
//
//  Created by 谢 on 2019/12/11.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <math.h>

const int size=30;
int map[size][size];
int money[size][size];
long long flag=0;

void set_without_money(void);       //设置有房价影响时的初始地图
void set_with_money(void);           //设置无房价影响时的初始地图
void set_money(void);                //设置房价矩阵

void moveaway(int people);          //富人搬离穷人区
int judge(int x,int y);             //判断该点附近是否为穷人
int judgepoor(int x,int t);         //判断该点附近是否为富人
void movemoney(int money);          //按钱来搬家
int judgemoney(int x,int y,int price);  //按房价与邻居判断

void money_neighbor_move(int i,int j);  //房价与邻居共同决定移动
void only_rich_move(int i,int j);       //仅有富人移动的情况
void only_poor_move(int i,int j);       //仅有穷人移动的情况


int main(int argc, const char * argv[]) {
    int i,j;
    srand((unsigned)time(NULL));
//    set_without_money();
    set_with_money();
    set_money();
    
    for (i=0; i<size; i++) {
        for (j=0; j<size; j++) {
            money_neighbor_move(i, j);
            //only_rich_move(i, j);
            //only_poor_move(i, j);
        }
    }
    
    return 0;
}

void set_without_money(){
    int i,j,n;
    for (i=0; i<size; i++) {
        for (j=0; j<size; j++) {
            n = rand()%100;
            if (n>70) {
                map[i][j] = 1;  //设置富人
            }
            else if (n<30){
                map[i][j] = -1; //设置穷人
            }
            else{
                map[i][j]=0;
            }
        }
    }
}

void set_with_money(){
    int i,j,n;
    for (i=0; i<size; i++) {
        for (j=0; j<size; j++) {
            n = rand()%100;
            if (n>90) {
                map[i][j]=n-75; //富人钱数：15-25
            }
            else if (n<10&&n>0){
                map[i][j] = n+5; //穷人钱数：5-14
            }
            else{
                map[i][j]=0;
            }
        }
    }
}

void set_money(){
    int i,j;
    for (i=0; i<=size/2; i++) {
        for (j=0; j<=size/2; j++) {
            money[i][j] = i+j-2;          //-2是为了不那么容易死循环
            money[30-i][30-j] = i+j-2;
            money[30-i][j] = i+j-2;
            money[i][30-j] = i+j-2;
        }
    }
}

int judge(int x,int y){
    if (map[x-1][y-1]<0) {return 0;}
    if (map[x][y-1]<0) {return 0;}
    if (map[x+1][y-1]<0) {return 0;}
    if (map[x-1][y]<0) {return 0;}
    if (map[x+1][y]<0) {return 0;}
    if (map[x-1][y+1]<0) {return 0;}
    if (map[x][y+1]<0) {return 0;}
    if (map[x+1][y+1]<0) {return 0;}
    return 1;
}

int judgepoor(int x,int y){
    if (map[x-1][y-1]>0) {return 0;}
    if (map[x][y-1]>0) {return 0;}
    if (map[x+1][y-1]>0) {return 0;}
    if (map[x-1][y]>0) {return 0;}
    if (map[x+1][y]>0) {return 0;}
    if (map[x-1][y+1]>0) {return 0;}
    if (map[x][y+1]>0) {return 0;}
    if (map[x+1][y+1]>0) {return 0;}
    return 1;
}

void moveaway(int people){
    int i,j;
    int x=rand()%size,y=rand()%size;
    if (people==1) {
        while (judge(x, y)==0||map[x][y]!=0) {
            x = rand()%size;
            y = rand()%size;
        }
        map[x][y] = 1;
    }
    else if (people==-1){
        while (judgepoor(x, y)==0||map[x][y]!=0) {
            x = rand()%size;
            y = rand()%size;
            flag++;
        }
        map[x][y] = -1;
    }
    system("clear");
    for (i=0; i<size; i++) {
        for (j=0; j<size; j++) {
            if (map[i][j]==1) {
                printf("\033[41;30m  \033[0m"); // 红色
            }
            else if (map[i][j]==-1){
                printf("\033[44;30m  \033[0m"); // 蓝色
            }
            else{
                printf("\033[47;30m  \033[0m"); // 白色
            }

        }
        printf("\n");
    }
    usleep(10000);
}

void movemoney(int price){
    int i,j;
    int x=rand()%size,y=rand()%size;
    while (price<money[x][y]||map[x][y]!=0||judgemoney(x, y, price)==0) {
        x=rand()%size;
        y=rand()%size;
    }
    map[x][y] = price;
    
    system("clear");
    for (i=0; i<size; i++) {
        for (j=0; j<size; j++) {
            if (map[i][j]>15) {
                printf("\033[41;30m  \033[0m"); // 红色
            }
            else if (map[i][j]<15&&map[i][j]>1){
                printf("\033[44;30m  \033[0m"); // 蓝色
            }
            else{
                printf("\033[47;30m  \033[0m"); // 白色
            }
        }
        printf("\n");
    }
    usleep(100000);
}

int judgemoney(int x,int y,int price){
    int j=price-15;
    if ((map[x-1][y-1]-15)*j<0&&map[x-1][y-1]!=0) {return 0;}
    if ((map[x][y-1]-15)*j<0&&map[x][y-1]!=0) {return 0;}
    if ((map[x+1][y-1]-15)*j<0&&map[x+1][y-1]!=0) {return 0;}
    if ((map[x-1][y]-15)*j<0&&map[x-1][y]!=0) {return 0;}
    if ((map[x+1][y]-15)*j<0&&map[x+1][y]!=0) {return 0;}
    if ((map[x-1][y+1]-15)*j<0&&map[x-1][y+1]!=0) {return 0;}
    if ((map[x][y+1]-15)*j<0&&map[x][y+1]!=0) {return 0;}
    if ((map[x+1][y+1]-15)*j<0&&map[x+1][y+1]!=0) {return 0;}
    return 1;
}

void money_neighbor_move(int i,int j){
    if (judgemoney(i,j,map[i][j])==0||map[i][j]<money[i][j]&&map[i][j]!=0) {
        movemoney(map[i][j]);
        map[i][j]=0;
    }
}

void only_rich_move(int i,int j){
    if (map[i][j]==1&&judge(i, j)==0) { //富人移动
        map[i][j] = 0;
        moveaway(1);
    }
}

void only_poor_move(int i,int j){
    if(map[i][j]==-1&&judgepoor(i, j)==0){ //穷人移动
        map[i][j] = 0;
        moveaway(-1);
    }
}
