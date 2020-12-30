//
//  main.c
//  作业11-2 回文字符串
//
//  Created by 谢 on 2019/12/9.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int is_palindrome(char* inp,char* rev){
    int i=0,count=0,j=0;
    while (*(inp+j)) {
        if (isalpha(*(inp+j))) {
            *(rev+i)=tolower(*(inp+j));
            i++;
            count++;
        }
        j++;
    }
    rev[i] = '\0';
    for (i=0; i<count; i++) {
        if (*(rev+i)!=*(rev+count-i-1)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char inp[100],nouse[1],rev[100];
    gets(nouse);
    printf("Enter a message:");
    gets(inp);
    if(is_palindrome(&inp,&rev)){
        printf("Palindrome!\n");
    }
    else
        printf("Not a Palindrome!\n");
    return 0;
}
