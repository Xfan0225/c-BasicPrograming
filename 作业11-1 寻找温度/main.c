//
//  main.c
//  作业11-1 寻找温度
//
//  Created by 谢 on 2019/12/7.
//  Copyright © 2019 谢. All rights reserved.
//

typedef int BOOL;
#define  true 1
#define false 0

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

BOOL search(const int *a, int n, int key){
    int i;
    for (i=0; i<n; i++) {
        if (*(a+i)==key) {
            return true;
        }
    }
    return false;
}

int main() {
    int temperatures[7][24],i,j;
    srand(time(NULL));
    //温度矩阵采用随机数生成（取值范围-20-40）
    for (i=0; i<7; i++) {
        for (j=0; j<24; j++) {
            temperatures[i][j]=rand()%60-20;
            printf("%d\t",temperatures[i][j]);
        }
        printf("\n");
    }
    
    if (search(&temperatures,7*24,32)) {
        printf("find!\n");
    }
    else
        printf("not find!\n");
    return 0;
}
