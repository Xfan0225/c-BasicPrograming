//
//  main.c
//  作业2-8
//
//  Created by 谢 on 2019/9/27.
//  Copyright © 2019 谢. All rights reserved.
//作业8

#include <stdio.h>

int main() {
    char num[3];
    int i=2;
    scanf("%s",&num);
    while (i>=0) {
        printf("%c",num[i--]);
    }
    printf("\n");
    return 0;
}
