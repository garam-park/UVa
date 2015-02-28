//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

// 한 개의 정수를 입력 받아서 후치증가 연산자를 사용하여 출력한 후 전치 증가 연산자를 사용하여 출력하는프로그램을 작성하시오.
#include <stdio.h>

int main() {

    int a;

    scanf("%d",&a);
    printf("후치 %d\n",a++);
    printf("전치 %d",++a);

    return 0;
}
