//
//  main.c
//  作业9-7 反转句子
//
//  Created by 谢 on 2019/11/23.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    char inp[100],a[1];
    int i=0,count=0,j=0,start,end;
    gets(a); //冲掉编译器的警告
    printf("Enter a sentence:");
    gets(inp);
    printf("Reversal of sentence:");
    while (inp[i]!='!'&&inp[i]!='?'&&inp[i]!='.') {
        i++;
    }
    end=i;
    count=i;
    while (i>=0) {
        if (inp[i]!=' ') {
            i--;
        }
        else{
            start = i;
            for (j=start+1; j<end; j++) {
                printf("%c",inp[j]);
            }
            printf(" ");
            end = start;
            i--;
        }
    }
    for (i=0; i<end; i++) {
        printf("%c",inp[i]);
    }
    printf("%c\n",inp[count]);
    return 0;
}
