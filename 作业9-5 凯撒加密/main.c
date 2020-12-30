//
//  main.c
//  作业9-5 凯撒加密
//
//  Created by 谢 on 2019/11/22.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    char inp[5][100],ans[5][100];
    int i=0,j,n,k=0;
    for (j=0; j<2; j++) {
        printf("Enter message to be encrypted:");
        if (j==1) {
            getchar();
        }
        scanf("%[^\n]",inp[j]);  //读到换行符时停止读入
        printf("Enter shift amount(1-25):");
        scanf("%d",&n);
        while (inp[j][i]!='\0') {
            if (inp[j][i]>='a' && inp[j][i]<='z') {
                if (inp[j][i]+n<='z') {
                    ans[j][i] = inp[j][i]+n;
                }
                else{
                    ans[j][i] = inp[j][i]+n-26;
                }
            }
            else if (inp[j][i]>='A' && inp[j][i]<='Z') {
                if (inp[j][i]+n<='Z') {
                    ans[j][i] = inp[j][i]+n;
                }
                else{
                    ans[j][i] = inp[j][i]+n-26;
                }
            }
            else{
                ans[j][i] = inp[j][i];
            }
            i++;
        }
        printf("Encrypted message:");
        while (ans[j][k]!='\0') {
            printf("%c",ans[j][k]);
            k++;
        }
        printf("\n");
        k=0;
        i=0;
    }
    return 0;
}
