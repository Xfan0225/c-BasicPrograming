//
//  main.c
//  作业6-5 分数表达式求和
//
//  Created by 谢 on 2019/11/1.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main() {
    double ans=0,ls[110];
    int n,i,j;
    for (j=1; j<4; j++) {
        printf("测试数据%d\n",j);
        scanf("%d",&n);
        ls[0] = 1;ls[1] = 1;
        for (i=2; i<=n+10; i++) {
            ls[i] = ls[i-1] + ls[i-2];
        }
        for (i=0; i<=n; i++) {
            ans += pow(-1, i)*(ls[i]/ls[i+1]);
        }
        printf("%.20lf\n",ans);
        ans = 0;
    }
     return 0;
}
