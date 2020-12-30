//
//  main.c
//  作业7-6 乘方
//
//  Created by 谢 on 2019/11/9.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

long long power(long long x,long long n){
    if (n==0) {
        return 1;
    }
    else if (n % 2 == 0) {
        return power(x, n/2)*power(x, n/2);
    }
    else
        return x*power(x, n-1);
}

int main() {
    int x,n,i;
    for (i=1; i<=5; i++) {
        printf("测试数据%d\n",i);
        scanf("%d%d",&x,&n);
        printf("ans is:%lld\n",power(x, n));
    }
    return 0;
}
