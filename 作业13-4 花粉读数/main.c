//
//  main.c
//  作业13-4 花粉读数
//
//  Created by 谢 on 2019/12/21.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int inp,data[10],i;
    double total=0;
    FILE *fp;
    /*
    fp = fopen("Pollen.txt", "w+");
    fprintf(fp, "30\n");
    fprintf(fp, "60\n");
    fprintf(fp, "40\n");
    fprintf(fp, "80\n");
    fprintf(fp, "90\n");
    fprintf(fp, "120\n");
    fprintf(fp, "150\n");
    fprintf(fp, "130\n");
    fprintf(fp, "160\n");
    fprintf(fp, "170\n");
    fclose(fp);
     */
    fp = fopen("Pollen.txt", "r");
    printf("This program is used to record pollen data.\n");
    printf("Please enter a new record:");
    scanf("%d",&inp);
    for (i=0; i<10; i++) {
        fscanf(fp, "%d",&data[i]);
        total+=data[i];
    }
    fclose(fp);
    fp = fopen("Pollen.txt", "w");
    printf("Last 10 days avg:%.2lf\n",total/10.0);
    printf("Current 10 days avg:%.2lf\n",(total-data[0]+inp)/10.0);
    for (i=0; i<9; i++) {
        data[i] = data[i+1];
    }
    data[9] = inp;
    for (i=0; i<10; i++) {
        fprintf(fp, "%d\n",data[i]);
    }
    fclose(fp);
    return 0;
}
