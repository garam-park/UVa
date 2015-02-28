//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

/*
<h1>
 111: 연산자 - 형성평가1
 <h1>

 <p>
 국어 영어 수학 컴퓨터 과목의 점수를 정수로 입력받아서 총점과 평균을 구하는 프로그램을 작성하시오. (단 평균의 소수점 이하는 버림 한다.)
 <p>

 <p>
    <b>input</b>
 70 95 63 100
 <p>

 <p>
     <b>output</b>
 총점 328점
 평균 82점
 </p>
 */
#include <stdio.h>

int main() {

    int a,b,c,d;

    scanf("%d %d %d %d",&a,&b,&c,&d);
    int sum = a+b+c+d;
    printf("총점 %d점\n",sum);
    printf("평균 %d점",sum/4);

    return 0;
}
