//
//  main.c
//  作业9-2 strtest
//
//  Created by 谢 on 2019/11/22.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    char strtest[15]="This is a test";
    int i;
//   test a
    printf("test a:");
    for (i=0; i<14; i++) {
        printf("%c",strtest[i]);
    }
    printf("\n");
//  test b
    printf("test b:");
    for (i=10; i<14; i++) {
        printf("%c",strtest[i]);
    }
    printf("\n");
//  test c
    printf("test c:");
    printf("%s\n",strtest);
//  test d
    printf("test d:");
    i=0;
    while (strtest[i]!='\0') {
        printf("%c",strtest[i]);
        i++;
    }
    printf("\n");
    return 0;
}
