//
//  main.c
//  作业6-2 数字翻译
//
//  Created by 谢 on 2019/11/1.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int inp,shi,ge,i;
    for (i=1; i<4; i++) {
        printf("测试数据%d\n",i);
        printf("Enter a two-digit number:");
        scanf("%d",&inp);
        ge = inp%10;
        shi = inp/10;
        printf("You entered the number ");
        switch (shi) {
            case 1:
                switch (ge) {
                    case 1: printf("eleven");break;
                    case 2: printf("twelve");break;
                    case 3: printf("thirteen");break;
                    case 4: printf("fourteen");break;
                    case 5: printf("fifteen");break;
                    case 6: printf("sixteen");break;
                    case 7: printf("seventeen");break;
                    case 8: printf("eighteen");break;
                    case 9: printf("nineteen");break;
                    case 0: printf("ten");break;
                    default:
                        break;
                }
                break;
            case 2: printf("twenty");break;
            case 3: printf("thirty");break;
            case 4: printf("fouty");break;
            case 5: printf("fifty");break;
            case 6: printf("sixty");break;
            case 7: printf("seventy");break;
            case 8: printf("eighty");break;
            case 9: printf("ninety");break;
            default:
                break;
        }
        if (shi != 1) {
            gewei(ge);
        }
        printf(".\n");
    }
    return 0;
}

int gewei(int n){
    switch (n) {
        case 0: break;
        case 1: printf("-one");break;
        case 2: printf("-two");break;
        case 3: printf("-three");break;
        case 4: printf("-four");break;
        case 5: printf("-five");break;
        case 6: printf("-six");break;
        case 7: printf("-seven");break;
        case 8: printf("-eight");break;
        case 9: printf("-nine");break;
        default:
            break;
    }
    return 0;
}

