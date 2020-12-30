//
//  main.c
//  作业7-1 递归倒序
//
//  Created by 谢 on 2019/11/8.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

void prt(long n){
    if (n>=10) {
        printf("%ld",n%10);
        return prt(n/10);
    }
    else{
        printf("%ld",n);
    }
}

int main() {
    long inp;
    scanf("%ld",&inp);
    prt(inp);
    printf("\n");
    return 0;
}

