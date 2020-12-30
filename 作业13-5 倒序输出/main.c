//
//  main.c
//  作业13-5 倒序输出
//
//  Created by 谢 on 2019/12/21.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *old,*new;
    int i=0;
    char inp[10000],val,lenth;
    old = fopen("test.txt","r");
    new = fopen("new.txt","w+");
    while ((val=fgetc(old))!=EOF) {
        inp[i] = val;
        i++;
    }
    lenth = strlen(inp);
    printf("Input is:");
    puts(inp);
    printf("Output is:");
    for (i=1; i<=lenth; i++) {
        fputc(inp[lenth-i], new);
        putchar(inp[lenth-i]);
    }
    printf("\n");
    return 0;
}
