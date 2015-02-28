//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

/*
<h1>
114: 연산자 - 형성평가4
 <h1>

 <p>
두 정수를 입력받아 첫 번째 수는 전치증가연산자를 사용하고 두 번째 수는 후치감소연산자를 사용하여 출력하고 바뀐 값을 다시 출력하는 프로그램을 작성하시오.
 <p>

 <p>
    <b>input</b>
10 15
 <p>

 <p>
     <b>output</b>
 11 15
 11 14
 </p>
 */
#include <stdio.h>

int main() {

    int a,b;

    scanf("%d %d",&a,&b);
    printf("%d %d\n",++a,b--);
    printf("%d %d",a,b);

    return 0;
}
