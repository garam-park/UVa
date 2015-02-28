//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

/*
<h1>
112: 연산자 - 형성평가2
 <h1>

 <p>
 두 정수를 입력받아서 나눈 몫과 나머지를 다음과 같은 형식으로 출력하는 프로그램을 작성하시오.
 <p>

 <p>
    <b>input</b>
 35 / 10 = 3...5
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
    printf("%d / %d = %d...%d",sum/4);

    return 0;
}
