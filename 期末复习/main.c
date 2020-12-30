//
//  main.c
//  期末复习
//
//  Created by 谢 on 2020/1/9.
//  Copyright © 2020 谢. All rights reserved.
//

#include <stdio.h>

int* sm(int ls[][20],int x,int y);
int* rtls(*ls,int x,int y);

int main() {
    int x,i,j;
    int ls[10][20];
    for (i=0; i<10; i++) {
        for (j=0; j<20; j++) {
            ls[i][j] = i+j;
        }
    }
    int *ans;
    ans = rtls(ls,10,20);
    for (i=0; i<10; i++) {
        printf("ans:%d\n",*ans+i);
    }
    if ('0'=='\0') {
        printf("yes\n");
    }
    return 0;
}

int * rtls(int *ls,int x,int y){
    int ans[10],i,j;
    for (i=0; i<x; i++) {
        ans[i]=0;
    }
    for (i=0; i<x; i++) {
        for (j=0;j<y; j++) {
            ans[i] += *(ls+i*10+j);
        }
    }
    return ans;
}
