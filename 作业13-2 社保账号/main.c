//
//  main.c
//  作业13-2 社保账号
//
//  Created by 谢 on 2019/12/20.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j;
    float a,b;
    char val[20];
    FILE *fp;
    fp = fopen("insureance.txt", "r");
/*
    fprintf(fp, "B.Caldwell\t\t555-98-4128\t\t7.32\t\t37\n");
    fprintf(fp, "D.Memcheck\t\t555-53-2147\t\t8.32\t\t40\n");
    fprintf(fp, "R.Potter\t\t555-32-9826\t\t6.54\t\t40\n");
    fprintf(fp, "W.Rosen\t\t\t555-09-4263\t\t9.80\t\t35\n");
*/
    printf("Name\t\t\tS.S Number\t\t\tSalary\n");
    for (i=0; i<4; i++) {
        for (j=0; j<2; j++) {
            fscanf(fp, "%s",val);
            printf("%s \t\t",val);
        }
        fscanf(fp, "%f%f",&a,&b);
        printf("%.2f\n",a*b);
    }
    fclose(fp);
    return 0;
}
