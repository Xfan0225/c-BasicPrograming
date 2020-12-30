//
//  main.c
//  作业10-4 文件扩展名
//
//  Created by 谢 on 2019/12/3.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void get_extension(const char *file_name, char *extension){
    int i=0,j=0,flag=0,lenth=strlen(file_name);
    for (i=0; i<lenth; i++) {
        if (file_name[i]=='.') {
            flag=1;
            j = i+1;
            break;
        }
    }
    if (flag==0) {
        *extension = '\0';
    }
    else{
        strcpy(extension,file_name+j);
    }
}

int main() {
    char file_name[200],extension[200];
    scanf("%s",&file_name);
    get_extension(&file_name, &extension);
    printf("extension:%s\n",extension);
    return 0;
}
