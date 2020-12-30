//
//  main.c
//  作业3-8 21点
//
//  Created by 谢 on 2019/10/11.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    char card[3];
    int i,sum=0,j;
    for (j=0; j<5;j++) {
        printf("测试数据%d\n",j+1);
        scanf("%s",card);
        for (i=0; i<3; i++) {
            if ('2'<=card[i]&&card[i]<='9' ) {
                sum += card[i]-48;
            }
            else if ('J'==card[i]||card[i]=='K'||card[i]=='Q'){
                sum += 10;
            }
            else if (card[i]=='A'){
                if (sum<=10) {
                    sum += 11;
                }
                else if (sum>10){
                    sum += 1;
                }
            }
        }
        printf("总和为：%d\n",sum);
        sum = 0;
    }
    return 0;
}
