//
//  main.c
//  作业10-6 最大最小单词
//
//  Created by 谢 on 2019/12/4.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>


void strjudge(char *inpstr, char *small,char* big){
    if (strcmp(inpstr,big)>0) {
        strcpy(big,inpstr);
    }
    if (strcmp(inpstr, small)<0) {
        strcpy(small,inpstr);
    }
}

int main() {
    char inp[200],small[200],big[200];
    int flag=0,count=0;
    while (flag==0) {
        printf("Enter word: ");
        scanf("%s",&inp);
        if(count==0){
            strcpy(small,inp);
            strcpy(big,inp);
            count = 1;
        }
        if (strlen(inp)==4) {
            flag=1;
        }
        strjudge(&inp,&small,&big);
    }
    printf("\nSmallest word: %s\nLargest word: %s\n",small,big);
    return 0;
}
