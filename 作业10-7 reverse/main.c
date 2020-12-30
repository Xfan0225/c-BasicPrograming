//
//  main.c
//  作业10-7 r reverse
//
//  Created by 谢 on 2019/12/4.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main(int argc,char *argv[]) {
    char rev[]="reverse";
    int i;
    if (strcmp(argv[1],rev)==0) {
        for (i=1; i<argc-1; i++) {
            printf("%s ",argv[argc-i]);
        }
    }
    printf("\n");
    return 0;
}
