//
//  main.c
//  作业3-6 温度转换
//
//  Created by 谢 on 2019/10/11.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    int i;
    float deg,fa,ce;
    char a;
    for (i=0; i<3; i++) {
        printf("测试数据%d\n",i+1);
        scanf("%f\n%c",&deg,&a);
        if (a=='f') {
            ce = (5.0/9.0)*(deg-32);
            printf("该温度为：%.2f°C\n",ce);
        }
        else if (a=='c'){
            fa = (9.0/5.0)*deg+32;
            printf("该温度为：%.2f°F\n",fa);
        }
        else{
            printf("输入有误，请检查\n");
        }
    }
    return 0;
}
