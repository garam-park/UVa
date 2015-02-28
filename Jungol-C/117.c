//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

/*
<h1>
117: 디버깅 - 형성평가2
 <h1>

 <p>
실수로 된 3과목의 점수를 입력받아 총점은 정수부분의 합계를 출력하고 평균은 실수의 평균을 구한 뒤 정수부분만 출력하는 프로그램을 작성하시오.
 <p>

 <p>
    <b>input</b>
70.5 95.5 68.5
 <p>

 <p>
     <b>output</b>
 총점 233점
 평균 78점
 </p>
 */
#include <stdio.h>

int main() {

    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);

    printf("총점 %d점\n",(int)a+(int)b+(int)c);
    printf("평균 %d점",(int)((a+b+c)/3));

    return 0;
}
