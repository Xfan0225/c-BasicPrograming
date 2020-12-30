//
//  main.c
//  作业12-5 rgb颜色
//
//  Created by 谢 on 2019/12/16.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

struct color{
    int red;
    int green;
    int blue;
};

int main() {
    struct color const MAGENTA={255,0,255};
//    struct color MAGENTA={
//        .red = 255,
//        .blue = 255
//    };
 
    printf("r:%d g:%d b:%d\n",MAGENTA.red,MAGENTA.green,MAGENTA.blue);
    return 0;
}
