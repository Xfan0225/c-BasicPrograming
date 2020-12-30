//
//  main.c
//  作业9-6 变位词
//
//  Created by 谢 on 2019/11/23.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int alpha[26],i=0;
    char a[20],b[20];
    printf("Enter first word:");
    scanf("%s",&a);
    printf("Enter second word:");
    scanf("%s",&b);
    for (i=0; i<26; i++) {
        alpha[i]=0;
    }
    i=0;
    while (a[i]!='\0') {
        alpha[a[i]-'a']+=1;
        i++;
    }
    i=0;
    while (b[i]!='\0') {
        alpha[b[i]-'a']-=1;
        i++;
    }
    for (i=0; i<26; i++) {
        if (alpha[i]!=0) {
            printf("The words are not anagrams.\n");
            return 0;
        }
    }
    printf("The words are anagrams.\n");
    return 0;
}
