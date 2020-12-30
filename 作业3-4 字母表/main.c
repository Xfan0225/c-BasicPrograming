//
//  main.c
//  作业3-4 字母表
//
//  Created by 谢 on 2019/10/11.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int i;
    char letter;
    for (i=0; i<2; i++) {
        printf("测试数据%d\n",i+1);
        scanf("\n%c",&letter);
        if ('a'<=letter&&letter<='z') {
            printf("该小写字母在字母表中的位置为：%d\n",letter-'a'+1);
        }
        else if ('A'<=letter&&letter<='Z'){
            printf("该大写字母在字母表中的位置为：%d\n",letter-'A'+1);
        }
    }
    return 0;
}
