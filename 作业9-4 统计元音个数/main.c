//
//  main.c
//  作业9-4 统计元音个数
//
//  Created by 谢 on 2019/11/22.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

void draw(int* ls){
    int max=0,i,j;
    for (i=0; i<5; i++) {
        if (i==0) printf("\n\ta |");
        else if (i==1) printf("\te |");
        else if (i==2) printf("元音 i |");
        else if (i==3) printf("\to |");
        else if (i==4) printf("\tu |");
        for (j=0; j<ls[i]; j++) {
            printf("*");
        }
        if (ls[i]>max) {
            max=ls[i];
        }
        printf("\n");
    }
    max = (max/5+1)*5;
    printf("\t  +");
    for (i=1; i<=max; i++) {
        if (i%5==0) printf("|");
        else printf("-");
    }
    printf("\n");
    printf("\t  0");
    for (i=1; i<=max; i++) {
        if (i%5==0) printf("%d",i);
        else if(i>10&&i%5!=4) printf(" ");
        else if (i<10) printf(" ");
    }
    printf("\n");
}

int main() {
    int ans[5],i;
    char inp;
    for (i=0; i<5; i++) {
        ans[i] = 0;
    }
    while (scanf("%c",&inp)!=EOF) {
        if (inp=='a'||inp=='A') ans[0]++;
        else if (inp=='e'||inp=='E') ans[1]++;
        else if (inp=='i'||inp=='I') ans[2]++;
        else if (inp=='o'||inp=='O') ans[3]++;
        else if (inp=='u'||inp=='U') ans[4]++;
    }
    printf("\na:%d\n",ans[0]);
    printf("e:%d\n",ans[1]);
    printf("i:%d\n",ans[2]);
    printf("o:%d\n",ans[3]);
    printf("u:%d\n",ans[4]);
    draw(ans);
    return 0;
}
