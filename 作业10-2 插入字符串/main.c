//
//  main.c
//  作业10-2 插入字符串
//
//  Created by 谢 on 2019/11/29.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void addChar(char* add, char* msg, int place,int lenthadd, int lenthstr){
    int i=0,j=0,flag=0;
    char val[200];
    for (i=0; i<=lenthadd+lenthstr; i++) {
        if (i>=place&&i<(lenthstr+place)) {
            val[i-place] = *(add+i);
            *(add+i) = *(msg+j);
            j++;
        }
        
        if (flag==1){
            val[i-place] = *(add+i);
            *(add+i) = val[i-j-place];
        }
        if (j==lenthstr) {
            flag = 1;
        }
    }
}

int main() {
    char ans[200],msg[200];
    int place,lenthadd,lenthstr;
    gets(ans);
    printf("请输入插入位置与内容，用空格分割\n");
    scanf("%d%s",&place,&msg);
    lenthadd = strlen(ans);
    lenthstr = strlen(msg);
    addChar(&ans,&msg,place,lenthadd,lenthstr);
    puts(ans);
    return 0;
}
