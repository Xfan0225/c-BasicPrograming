//
//  main.c
//  作业7-3 等差数列
//
//  Created by 谢 on 2019/11/8.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int cal(int a,int n,int d){
    if (n!=0) {
        return cal(a, n-1, d)+d;
    }
    else
        return a;
}

int main() {
    int a,n,d;
    scanf("%d%d%d",&a,&n,&d);
    printf("%d\n",cal(a, n, d));
    return 0;
}

