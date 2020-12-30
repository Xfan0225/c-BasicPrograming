//
//  main.c
//  作业11-4 年月日
//
//  Created by 谢 on 2019/12/9.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

void date(int month, char* monthname[]){
    switch (month) {
        case 1: printf("%s",*monthname); break;
        case 2: printf("%s",*(monthname+1)); break;
        case 3: printf("%s",*(monthname+2)); break;
        case 4: printf("%s",*(monthname+3)); break;
        case 5: printf("%s",*(monthname+4)); break;
        case 6: printf("%s",*(monthname+5)); break;
        case 7: printf("%s",*(monthname+6)); break;
        case 8: printf("%s",*(monthname+7)); break;
        case 9: printf("%s",*(monthname+8)); break;
        case 10: printf("%s",*(monthname+9)); break;
        case 11: printf("%s",*(monthname+10)); break;
        case 12: printf("%s",*(monthname+11)); break;
        default:
            break;
    }
}

int main() {
    int day,month,year;
    char *monthname[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("Enter a date (mm/dd/yyyy):");
    scanf("%d/%d/%d",&month,&day,&year);
    printf("You enteren the date ");
    date(month, monthname);
    printf(" %d, %d\n",day,year);
    return 0;
}
