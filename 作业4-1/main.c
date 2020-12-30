//
//  main.c
//  作业4-1
//
//  Created by 谢 on 2019/10/18.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int i,inp,n;
    float sum=0,avg;
    printf("Please type in the total number of data values to be add.\n");
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&inp);
        sum += inp;
    }
    avg = sum/n;
    printf("The sum of input is: %.2f\n",sum);
    printf("The average of input is: %.2f\n",avg);
    return 0;
}
