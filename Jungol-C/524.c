//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

/*
 2개의 정수를 입력 받아서 논리곱과 논리합의 결과를 출력하는 프로그램을 작성하시오.
 */
#include <stdio.h>

int main() {

    int a,b;

    scanf("%d %d",&a,&b);

    printf("%d %d",a&&b,a||b);

    return 0;
}
