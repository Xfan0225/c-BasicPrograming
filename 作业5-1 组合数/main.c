//
//  main.c
//  作业5-1 组合数
//
//  Created by 谢 on 2019/10/25.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
long long cmb(long long m,long long n){
    long long ans=1,i;
    if (n>m || n<=0 || m<=0) {
        printf("INPUT ERROR\n");
        return -1;
    }
    else{
        for (i=m-n+1; i<m+1; i++) {
            ans = ans * i;

        }
        for (i=1; i<n+1; i++) {
            ans = ans / i;
        }
    }
    return ans;
}

int main() {
    long ans;
    int m,n,i;
    for (i=1; i<4; i++) {
        printf("测试数据%d\n",i);
        scanf("%d%d",&m,&n);
        ans = cmb(n, m);
        if (ans>=1) {
            printf("ans is :%lld\n",ans);
        }
    }
    return 0;
}

