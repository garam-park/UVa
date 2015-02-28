//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

//두 개의 정수를 입력받아서
//첫 번째 줄에는 두 정수의 값이 같으면 1 아니면 0을 출력하고
//두 번째 줄에는 같지 않으면 1 같으면 0을 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {

    int a,b;

    scanf("%d %d",&a,&b);

    printf("%d\n",a==b);
    printf("%d",a!=b);

    return 0;
}
