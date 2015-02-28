//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

/*
<h1>
527: 디버깅 - 자가진단2
 <h1>

 <p>
2개의 정수를 입력받아서 첫 번째 수를 두 번째 수로 나눈 몫을 출력하고 첫 번째 수를 double로 변환하여두 번째 수로 나눈 값을 구한 후 반올림하여 소수 둘째자리까지 출력하는 프로그램을 작성하고 프로그램내용에 관한 설명을 주석으로 표시하시오.
 <p>

 <p>
    <b>input</b>
11 3
 <p>

 <p>
     <b>output</b>
3 3.67
 </p>
 */
#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d",&a,&b);

    printf("%d %.2lf",(a/b),(double)a/(b));

    return 0;
}
