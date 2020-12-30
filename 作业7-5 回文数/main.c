//
//  main.c
//  作业7-5 回文数
//
//  Created by 谢 on 2019/11/9.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

void numpal(int* n,int start,int end){
    if (end-start<=1){
        printf("1\n");
    }
    else if (n[start]==n[end]) {
        return numpal(n,start+1,end-1);
    }
    else
        printf("0\n");
}

int main() {
    int i,j=0,num[100];
    char n[100];
    for (i=1; i<=5; i++) {
        printf("测试数据%d\n",i);
        scanf("%s",&n);
        while (n[j]!='\0') {
            num[j] = n[j]-48;
            j++;
        }
        numpal(num,0,j-1);
        j=0;
    }
    return 0;
}
