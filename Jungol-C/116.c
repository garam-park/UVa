//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

/*
<h1>
116: 디버깅 - 형성평가1
 <h1>

 <p>
정수로 된 3과목의 점수를 입력받아 평균을 구한 후 반올림하여 소수 첫째자리까지 출력하는 프로그램을 작성하시오.
 <p>

 <p>
    <b>input</b>
 70 95 65
 <p>

 <p>
     <b>output</b>
76.7점
 </p>
 */
#include <stdio.h>

int main() {

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    printf("%.1lf점",(double)(a+b+c)/3);

    return 0;
}
