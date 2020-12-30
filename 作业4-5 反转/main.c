//
//  main.c
//  作业4-5 反转
//
//  Created by 谢 on 2019/10/19.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    do {
        printf("%d",n%10);
        n = n/10;
    } while (n%10 != 0);
    printf("\n");
    return 0;
}
