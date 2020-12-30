//
//  main.c
//  作业6-6 分数加和
//
//  Created by 谢 on 2019/11/1.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int m0,n0,m1,n1,x0,y0,g,i;
    for (i=1; i<4; i++) {
        printf("测试数据%d\n",i);
        scanf("%d/%d+%d/%d",&m0,&n0,&m1,&n1);
        x0 = m0*n1+m1*n0;
        y0 = n0*n1;
        g = gcd(x0, y0);
        printf("%d/%d\n",x0/g,y0/g);
    }
    return 0;
}

int gcd(int a,int b){
    int c;
    while (a%b!=0) {
        c = b;
        b = a-(a/b)*b;
        a = c;
    }
    return b;
}
