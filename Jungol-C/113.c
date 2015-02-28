//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

/*
<h1>
113: 연산자 - 형성평가3
 <h1>

 <p>
 직사각형의 가로와 세로의 길이를 정수형 값으로 입력받은 후 가로의 길이는 5 증가시키고 세로의 길이는 2배하여 저장한 후 가로의 길이 세로의 길이 넓이를 차례로 출력하는 프로그램을 작성하시오.
 <p>

 <p>
    <b>input</b>
20 15
 <p>

 <p>
     <b>output</b>
 가로 = 25
 세로 = 30
 넓이 = 750
 </p>
 */
#include <stdio.h>

int main() {

    int a,b,c;

    scanf("%d %d",&a,&b);

    a+=5;
    b*=2;
    c = a*b;

    printf("가로 = %d\n",a);
    printf("세로 = %d\n",b);
    printf("넓이 = %d",c);

    return 0;
}
