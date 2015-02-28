//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

/*
<h1>
526: 디버깅 - 자가진단1
 <h1>

 <p>
2개의 실수(double)를 입력 받아서 두 수의 곱을 정수로 변환한 결과값과 두 수를 각각 정수로 변환하여 곱을 구한 결과값을 출력하는 프로그램을 작성하고 프로그램 내용에 관한 설명을 주석으로 표시하시오.
 <p>

 <p>
    <b>input</b>
 3.4 5.65
 <p>

 <p>
     <b>output</b>
19 15
 </p>
 */
#include <stdio.h>

int main() {

    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("%d %d",(int)(a*b),(int)a*(int)b);

    return 0;
}
