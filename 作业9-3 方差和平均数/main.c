//
//  main.c
//  作业9-3 方差和平均数
//
//  Created by 谢 on 2019/11/22.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>
#include <math.h>

float calcAvg(int* ls){
    int i;
    float ans=0;
    for (i=0; i<14; i++) {
        ans += ls[i];
    }
    return ans/14.0;
}

float variance(int* ls, float avg){
    int i;
    float ans=0;
    for (i=0; i<14; i++) {
        ans += powf((ls[i]-avg), 2)/14.0;
    }
    return ans;
}

int main() {
    int testvals[14] = {89,95,72,83,99,54,86,75,92,73,79,75,82,73};
    float avg=calcAvg(testvals);
    printf("Avg is:%.3f\n",avg);
    printf("variance is:%.3f\n",variance(testvals, avg));
    return 0;
}

