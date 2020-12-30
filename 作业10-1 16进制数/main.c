//
//  main.c
//  作业10-1 16进制数
//
//  Created by 谢 on 2019/11/29.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

const char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

void transhex(int i){  //16进制转换
    int otp[5],rev[5];
    int j=0,k=0;
    while (i!=0) {
        otp[j]=i%16;
        i /= 16;
        j++;
    }
    while (k<j) {
        rev[k]=otp[j-k-1];
        k++;
    }
    printf("0x");
    for (i=0; i<j; i++) {
        printf("%c",hex[rev[i]]);
    }
    printf(" ");
}

void trans(char* inp, int lenth){
    int ans[50],i;
    for (i=0; i<lenth; i++) {
        ans[i] = *inp++;
        transhex(ans[i]);
    }
}

int main() {
    char inp[50];
    gets(inp);
    int lenth;
    lenth = strlen(inp);
    trans(&inp, lenth);
    printf("\n");
    return 0;
}
