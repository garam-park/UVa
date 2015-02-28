//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

/*
 3개의 정수를 입력 받아 첫 번째 수가 가장 크면 1 아니면 0을 출력하고 세 개의 수가 모두 같으면 1 아니면 0을 출력하는 프로그램을 작성하시오.
 */
#include <stdio.h>

int main() {

    int a,b,c,d;

    scanf("%d %d %d",&a,&b,&c);
    if (a>b) {
        if (a>c) {
            d = 1;
        }else{
            d = 0;
        }
    }else{
        d=0;
    }
    printf("%d %d",d,a==b&&b==c);

    return 0;
}
