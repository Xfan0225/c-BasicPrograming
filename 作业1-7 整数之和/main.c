//
//  main.c
//  作业1-7 整数之和
//
//  Created by 谢 on 2019/9/19.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int ans1,ans2;
    ans1 = sum(1,100,1);
    ans2 = sum(100,1000,1);
    printf("sum 1 to 100 = %d\n",ans1);
    printf("sum 100 to 1000 = %d\n",ans2);
    return 0;
}

int sum(int a,int b, int d){
    int ans,n;
    n = b-a +1;
    ans = (n/2)*(2*a+(n-1)/d);
    return ans;
}
