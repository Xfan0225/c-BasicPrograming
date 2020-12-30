//
//  main.c
//  作业13-3 间隔读取
//
//  Created by 谢 on 2019/12/20.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int i;
    char val;
    FILE *fp;
    fp = fopen("test.txt", "w+");
    for (i='a'; i<='z'; i++) {
        fprintf(fp, "%c",i);
    }
    for (i='A'; i<='Z'; i++) {
        fprintf(fp, "%c",i);
    }
    fputc('\0', fp);
    fclose(fp);
    fp = fopen("test.dat", "r");
    i=0;
    while ((val=fgetc(fp))!=EOF) {
        if (i%2==0) {
            printf("%c",val);
        }
        i++;
    }
    printf("\n");
    fclose(fp);
    return 0;
}
