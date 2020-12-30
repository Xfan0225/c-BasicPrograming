//
//  main.c
//  作业13-7 标准电话号码
//
//  Created by 谢 on 2019/12/21.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    FILE *fp;
    int number[10],i=0;
    char inp,name[20];
    printf("请输入文件名：");
    scanf("%s",&name);
    fp = fopen(name, "r");
    while ((inp=fgetc(fp))!=EOF) {
        if (i==9) {
            printf("(%d%d%d)%d%d%d-%d%d%d%d\n",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7],number[8],number[9]);
            i=0;
        }
        else if (inp>='0'&&inp<='9'){
            number[i] = inp-48;
            i++;
        }
    }
    fclose(fp);
    return 0;
}
