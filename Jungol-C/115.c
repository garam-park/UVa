//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

/*
<h1>
115: 연산자 - 형성평가5
 <h1>

 <p>
민수와 기영이의 키와 몸무게를 입력받아 민수가 키도 크고 몸무게도 크면 1 그렇지 않으면 0을 출력하는 프로그램을 작성하시오.
 <p>

 <p>
    <b>input</b>
 민수의 키와 몸무게 입력 150 35
 기영이의 키와 몸무게 입력 145 35
 <p>

 <p>
     <b>output</b>
0
 </p>
 */
#include <stdio.h>

int main() {

    int a,b,c,d;
    printf("민수의 키와 몸무게 입력 ");
    scanf("%d %d",&a,&b);
    printf("기영이의 키와 몸무게 입력 ");
    scanf("%d %d",&c,&d);

    printf("%d",(a>c)&&(b>d));

    return 0;
}
