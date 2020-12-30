//
//  main.c
//  作业10-
//
//  Created by 谢 on 2019/12/3.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int count(char* inp,int lenth){
    int i=0,count=0;
    for (i=0; i<lenth; i++) {
        if (*(inp+i)=='.'||*(inp+i)=='?'||*(inp+i)=='!') {
            count++;
        }
    }
    return count;
}

int main() {
    char inp[50000];
    int i=0;
    while (scanf("%c",&inp[i])!=EOF) {
        i++;
    }
    printf("The number for sentence:%d\n",count(&inp, i));
    return 0;
}
