//
//  main.c
//  作业5-4 猜数字游戏
//
//  Created by 谢 on 2019/10/25.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num,inp,i,flag=0;
    char judge;
    srand((unsigned int)time(NULL));
    num = rand()%100+1;
    printf("请输入一个1-100之间的数\n");
    for (i=1; i<8; i++) {
        scanf("%d",&inp);
        if (inp<num) {
            printf("Wrong Number, Too Low. Try Again!(left chance:%d)\n",7-i);
        }
        else if (inp>num){
            printf("Wrong Number, Too High. Try Again!(left chance:%d)\n",7-i);
        }
        else{
            printf("Hooray, you have won!\n");
            flag = 1;
            break;
        }
    }
    if (flag==0) {
        printf("Sorry, You lose. The right number is %d\n",num);
    }
    printf("Would you like to play again(y/n)?\n");
    scanf("%s",&judge);
    if (judge=='y') {
        return main();
    }
    else{
        return 0;
    }
}
