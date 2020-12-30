//
//  main.c
//  作业10-8 args
//
//  Created by 谢 on 2019/12/4.
//  Copyright © 2019 谢. All rights reserved.
//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define ADD "add"
#define SUB "sub"
#define DIV "div"
#define MUL "mul"

int add(int,int);
int sub(int,int);
int divide(int,int);
int multiple(int,int);
int int_calculator(char *code,int,int);

void to_lower(char * inp, int lenth){
    int i;
    for (i=0; i<lenth; i++) {
        if (inp[i]<='Z') {
            inp[i] += 32;
        }
    }
}

int main(int argc, char *argv[])
{
    int i;
    if(argc!=4)
    {
        printf("usage: %s operation_name int_a int_b\n",argv[0]);
        return -1;
    }
    else
    {
        to_lower(argv[1], strlen(argv[1]));
        int result=int_calculator(argv[1],atoi(argv[2]),atoi(argv[3]));
        printf("result of %s %s %s = %d\n",argv[2],argv[3],argv[1],result);
        return 0;
    }
}

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int divide(int a,int b){return a/b;}
int multiple(int a,int b){return a*b;}
int int_calculator(char *code,int a, int b)
{
    if(0==strcmp(code,ADD))
        return add(a,b);
    else if(0==strcmp(code,SUB))
        return sub(a,b);
    else if(0==strcmp(code,DIV))
        return divide(a,b);
    else if(0==strcmp(code,MUL))
        return multiple(a,b);
    else
        return -1;
}
