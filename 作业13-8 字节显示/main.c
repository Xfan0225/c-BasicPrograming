//
//  main.c
//  作业13-8 字节显示
//
//  Created by 谢 on 2019/12/21.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int i=0,j=0;
    char name[30],ans[10000],val;
    long lenth=0;
    FILE *fp;
    for (i=0; i<10000; i++) {
        ans[i] = '\0';
    }
    i=0;
    printf("请输入文件名：");
    scanf("%s",&name);
    fp = fopen(name, "rb");
    printf("Offset\t            Bytes            \tCharacters\n");
    printf("------\t-----------------------------\t----------\n");
    while ((val=fgetc(fp))!=EOF) {
        ans[i] = val;
        i++;
    }
    lenth = strlen(ans);
    for (i=0; i<=lenth/10; i++) {
        printf("%d\t\t",i*10);
        for (j=0; j<10; j++) {
            if ((j+i*10)<lenth) {
                printf("%X ",ans[j+i*10]);
            }
            else{
                printf("   ");
            }
        }
        printf("\t");
        for (j=0; j<10; j++) {
            if ((j+i*10)<lenth) {
                if (isprint(ans[j+i*10])) {
                    printf("%c",ans[j+i*10]);
                }
                else{
                    printf(".");
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    fclose(fp);
    return 0;
}
