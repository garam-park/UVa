//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

//두 개의 정수를 입력받아 각각 후치 증가 연산자와 전치 감소 연산자를 사용하여 두 수의 곱을 구한 후 각각의 값을 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {

    int a,b;

    scanf("%d %d",&a,&b);
    int c = a++ * --b;
    printf("%d %d %d",a,b,c);

    return 0;
}
