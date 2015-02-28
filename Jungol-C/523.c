//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

/*
 두 개의 정수를 입력받아서 다음과 같이 4가지 관계연산자의 결과를 출력하시오.
 */
#include <stdio.h>

int main() {

    int a,b;

    scanf("%d %d",&a,&b);

    printf("%d > %d --- %d\n",a,b,a>b);
    printf("%d < %d --- %d\n",a,b,a<b);
    printf("%d >= %d --- %d\n",a,b,a>=b);
    printf("%d <= %d --- %d",a,b,a<=b);

    return 0;
}
