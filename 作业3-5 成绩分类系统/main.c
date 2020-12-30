//
//  main.c
//  作业3-5 成绩分类系统
//
//  Created by 谢 on 2019/10/11.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int i,n;
    for (i=0; i<5; i++) {
        printf("测试数据%d\n",i+1);
        scanf("%d",&n);
        if (n>=90) printf("grade:A\n");
        else if (n>=80) printf("grade:B\n");
        else if (n>=70) printf("grade:C\n");
        else if (n>=60) printf("grade:D\n");
        else printf("grade:F\n");
    }
    return 0;
}
