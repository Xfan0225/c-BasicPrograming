//
//  main.c
//  作业2-6 直角距离
//
//  Created by 谢 on 2019/9/27.
//  Copyright © 2019 谢. All rights reserved.
//作业6

#include <stdio.h>
#include <math.h>
int main() {
    int i;
    double x,y,ans;
    for (i=1; i<=3; i++) {
        printf("测试数据%d\n",i);
        scanf("%lf%lf",&x,&y);
        ans = sqrt(pow(x, 2)+pow(y, 2));
        printf("最短距离：%.0lf\n",ans);
    }
    return 0;
}
