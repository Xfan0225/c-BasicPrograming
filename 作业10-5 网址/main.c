//
//  main.c
//  作业10-5 网址
//
//  Created by 谢 on 2019/12/4.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

void build_index_url(const char *domain,const char *index_url){
    char start[]="http://www.",end[]="/index.html";
//    int st=strlen(start),ed=strlen(end),mid=strlen(domain);
    strcpy(index_url,start);
    strcat(index_url,domain);
    strcat(index_url,end);
}

int main() {
    char domain[200],index_url[200];
    scanf("%s",domain);
    build_index_url(&domain, &index_url);
    printf("%s\n",index_url);
    return 0;
}
