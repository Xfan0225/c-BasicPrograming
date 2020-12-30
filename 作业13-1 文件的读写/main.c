//
//  main.c
//  作业13-1 文件的读写
//
//  Created by 谢 on 2019/12/20.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int i,j=0;
    char var[100],var2[100],var3[100];
    fp = fopen("test for homework.txt", "r");
/*
    fprintf(fp, "H.Baker\t\t614 Freeman St.\t\tOrange\t\tNJ\n");
    fprintf(fp, "D.Rosso\t\t83 Chambers St.\t\tMadison\t\tNJ\n");
    fprintf(fp, "K.Tims\t\t891 Ridgewood Rd.\tMillburn\tNJ\n");
    fprintf(fp, "B.Williams\t24 Tremont Ave.\t\tBorrklyn\tNY\n");
*/
    for (i=0; i<4; i++) {
        fscanf(fp, "%s",&var);
        printf("Name:%s\n",var);
        fscanf(fp, "%s%s%s",&var,&var2,&var3);
        printf("Adress:%s %s %s\n",var,var2,var3);
        fscanf(fp, "%s%s",&var,&var2);
        printf("City, State:%s %s\n\n",var,var2);
        
    }
    fclose(fp);
    return 0;
}

