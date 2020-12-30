//
//  main.c
//  文件拼接
//
//  Created by 谢 on 2019/12/21.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    int n,i,flag=0,j=0;
    FILE *fp;
    char inp[10][1000],name[100][100],ans[100000],val;
    printf("请输入想要拼接的文件数量：");
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        printf("请输入想第%d个要打开的文件名：",i+1);
        scanf("%s",name[i]);
        fp = fopen(name[i], "r");
        if (fp!=NULL) {
            flag=1;
            while ((val=fgetc(fp))!=EOF) {
                inp[i][j] = val;
                j++;
            }
            strcat(ans,inp[i]);
            j=0;
        }
        j=0;
    }
    if (flag==1) {
        puts(ans);
    }
    else{
        printf("打不开任何文件\n");
    }
    fclose(fp);
    return 0;
}
