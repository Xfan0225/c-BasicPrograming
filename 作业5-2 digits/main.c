//
//  main.c
//  作业5-2 digits
//
//  Created by 谢 on 2019/10/25.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int num_digits(int n,int k){
    int i;
    for (i=0; i<k-1; i++) {
        n = n/10;
        if (n==0) {
            return -1;
        }
    }
    return n%10;
}

int main() {
    int n,k,i;
    for (i=1; i<4; i++) {
        printf("测试数据%d\n",i);
        scanf("%d%d",&n,&k);
        printf("ans is :%d\n",num_digits(n, k));
    }
    return 0;
}

