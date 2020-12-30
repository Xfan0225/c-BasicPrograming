//
//  main.c
//  作业1-6 支付账单
//
//  Created by 谢 on 2019/9/19.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    float paid=6.07,check=10.0,payback;
    int dollar=0,quarter=0,dime=0,nickel=0,cent=0;
    payback = check - paid;
    while (payback > 0) {
        if (payback>=1) {
            dollar += 1;
            payback -= 1;
        }
        else if (payback>=0.25){
            quarter += 1;
            payback -= 0.25;
        }
        else if (payback>=0.1){
            dime += 1;
            payback -= 0.1;
        }
        else if (payback>= 0.05){
            nickel += 1;
            payback -= 0.05;
        }
        else{
            cent += 1;
            payback -= 0.01;
        }
    }
    printf("\tPayback\n");
    printf("Dollar:\t\t%d\n",dollar);
    printf("Quarter:\t%d\n",quarter);
    printf("Dime:\t\t%d\n",dime);
    printf("Nickel:\t\t%d\n",nickel);
    printf("Cent:\t\t%d\n",cent);
    return 0;
}
