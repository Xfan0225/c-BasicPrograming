//
//  main.c
//  作业6-1 校验码
//
//  Created by 谢 on 2019/11/1.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int i,ji=0,ou=0;
    char ls[15];
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%s",&ls);
    for (i=0; i<12; i++) {
        if (i%2==0) {
            ou += ls[i]-48;
        }
        else if (i%2==1){
            ji += ls[i]-48;
        }
    }
    printf("Check digit: %d\n",9-(ji*3+ou-1)%10);
    return 0;
}
