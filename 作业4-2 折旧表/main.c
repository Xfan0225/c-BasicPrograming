//
//  main.c
//  作业4-2 折旧表
//
//  Created by 谢 on 2019/10/18.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int value=28000,dis=4000,i;
    printf("\t\t\tDEPRECIATION SCHEDULE\n");
    printf("\t\t\t---------------------\n\n");
    printf("\t\t\t\t\t\tEND-OF-YEAR\t\tACCUMULATED\n");
    printf("YEAR\tDEPRECIATION\t\tVALUE\t\tDEPRECIATION\n");
    printf("----\t------------\t-----------\t\t------------\n");
    for (i=1; i<7; i++) {
        printf("%d\t\t\t4000\t\t\t%d\t\t\t%d\n",i,value-i*dis,dis*i);
    }
    printf("%d\t\t\t4000\t\t\t%d\t\t\t\t%d\n",i,value-i*dis,dis*i);
    return 0;
}
