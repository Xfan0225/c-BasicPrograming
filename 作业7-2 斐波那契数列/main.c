//
//  main.c
//  作业7-2 斐波那契数列
//
//  Created by 谢 on 2019/11/8.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

long fib(long long n){
    if (n<2) {
        return n;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}

int main() {
    int i,j;
    long long n,ls[50];
    double start_time,end_time;
    start_time = clock();
    for (j=1; j<=3; j++) {
        printf("测试数据%d\n",j);
        scanf("%lld",&n);
        printf("递归运行结果：%lld\n",fib(n));
        end_time = clock();
        printf("递归程序运行时间：%.2fms\n",(end_time-start_time)/CLOCKS_PER_SEC*1000);
        start_time = clock();
        ls[0] = 1;ls[1] = 1;
        for (i=2; i<=n+10; i++) {
            ls[i] = ls[i-1] + ls[i-2];
        }
        printf("循环程序运行结果：%lld\n",ls[n-1]);
        end_time = clock();
        printf("循环程序运行时间：%.2fms\n\n",(end_time-start_time)/CLOCKS_PER_SEC*1000);
    }
    return 0;
}

