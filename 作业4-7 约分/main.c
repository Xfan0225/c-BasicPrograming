//
//  main.c
//  作业4-7
//
//  Created by 谢 on 2019/10/19.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int x,y,a,b,n,i;
    for (i=1; i<6; i++) {
        printf("测试数据%d:\n",i);
        scanf("%d/%d",&x,&y);
        if (y==0) {
            printf("分母不能为0，请检查输入\n");
        }
        else{
            n = gcd(x,y);
            a = x/n;
            b = y/n;
            if (b==1) {
                printf("%d\n",a);
            }
            else{
                printf("%d/%d\n",a,b);
            }
        }
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
