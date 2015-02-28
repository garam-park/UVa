//
//  main.c
//
//  Created by garam on 2015. 2. x
//  Copyright (c) 2015년 garam. All rights reserved.
//

/*
<h1>
119: 디버깅 - 형성평가4
 <h1>

 <p>
다음의 프로그램을 작성하여 같은 방법으로 ① ② ③ 위치에서 디버깅 창에 표시된 a의 값을 각각 입력하시오. (PC의 시간이 맞는지 확인하세요. 시간이 다르면 결과가 틀릴 수 있습니다.)

 <code>
 #include <stdio.h>
 #include <time.h>

 int main() {

 int a = 0;

 time_t now;
 struct tm tt;

 time(&now);
 tt = *localtime(&now);
 a = tt.tm_year;//1
 a += tt.tm_mon;//2
 a += tt.tm_mday;//3

 printf("%d %d %d\n",1,2,3);

 return 0;
 }
 </code>

 단, 체출시에는 int a = 0; 부터 a +=tt.tm_mday; 까지의 내용을 삭제해주세요..
 런타임에러가 나네요..

 <p>

 <p>
    <b>input</b>
① ② ③ 의 값만 출력
 <p>

 <p>
     <b>output</b>
 총점 233점
 평균 78점
 </p>
 */
#include <stdio.h>
#include <time.h>

int main() {

//    int a = 0;
//
//    time_t now;
//    struct tm tt;
//
//    time(&now);
//    tt = *localtime(&now);
////        printf("%d\n",a);
//    a = tt.tm_year;//1
////    printf("%d\n",a);
//    a += tt.tm_mon;//2
////        printf("%d\n",a);
//    a += tt.tm_mday;//3
//
    printf("%d %d %d\n",0,115,116);

    return 0;
}
