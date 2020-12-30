//
//  main.c
//  作业1-1 警报声
//
//  Created by 谢 on 2019/9/19.
//  Copyright © 2019 谢. All rights reserved.
//

#include <stdio.h>

int main() {
    printf("\a");
    return 0;
}
//mac系统由于运行在Unix内核下，\a是不会发出警报声的
