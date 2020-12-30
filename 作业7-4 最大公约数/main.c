//
//  main.c
//  作业7-4 最大公约数
//
//  Created by 谢 on 2019/11/9.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int gcd(m,n){
    int val;
    if (m<n) {
        val = m;
        m = n;
        n = val;
    }
    if (m%n != 0) {
        return gcd(n, m%n);
    }
    else
        return n;
}

int main() {
    int m,n;
    scanf("%d%d",&m,&n);
    printf("最大公约数：%d\n",gcd(m, n));
    return 0;
}
