//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

//정수 2개를 입력받아서 첫 번째 수에는 100을 증가시켜 저장하고 두 번째 수는 10으로 나눈 나머지를 저장한 후 두 수를 차례로 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main() {

    int a,b;
    
    scanf("%d %d",&a,&b);
    a+=100;
    b%=10;
    printf("%d %d",a,b);

    return 0;
}
