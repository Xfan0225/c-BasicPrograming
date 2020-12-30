//
//  main.c
//  作业11-3 处理姓名
//
//  Created by 谢 on 2019/12/9.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

void reverse_name(char* name){
    int i=0,j=0,flag=0;
    char first;
    while (*(name+i)) {
        if (isalpha(*(name+i))&&flag==0) {
            first = toupper(*(name+i));
            flag = 1;
        }
        if (*(name+i)==' ') {
            if (isalpha(*(name+i-1))) {
                flag=2;
            }
        }
        if (flag==2&&isalpha(*(name+i))) {
            *(name+j)=*(name+i);
            j++;
        }
        i++;
    }
    *(name+j)=',';j++;
    *(name+j)=' ';j++;
    *(name+j)=first;j++;
    *(name+j)='.';j++;
    *(name+j)='\0';
}

int main() {
    char name[100],ans[20];
    int i;
    gets(ans);
    printf("Enter a first and last name:");
    gets(name);
    reverse_name(&name);
    puts(name);
    return 0;
}
