//
//  main.cpp
//  The3n1problem100
//
//  Created by garam on 2015. 2. 24..
//  Copyright (c) 2015년 garam. All rights reserved.
//

#include <cstdio>
#include <algorithm>
using namespace std;

int main () {
    
    //kor : 입력 받을 수 i와 j
    //eng : input value i and j
    int i, j;
    
    //kor : i와 j를 입력 받는다.
    //eng : receive value i,j to ref i and j
    while ( scanf ("%d %d", &i, &j) != -1 ) {
        
        //tmp_i,tmp_j
        int tmp_i = i;
        int tmp_j = j;
        
        //sort i,j asc
        if ( i > j ) swap (i, j);
        
        //declare max cycle and tmp_cycle
        int max_cycle_length = 0;
        int cycle_length;
        
        
        for (; i <= j ; i++) {
            
            unsigned int n = i;
            
            cycle_length = 1;
            
            while ( n != 1 ) {
                if ( n % 2 == 1 ) n = 3 * n + 1;
                
                //kor 시프트 연사는 2로 나누는 것과 같다.
                //eng shif to right is same opr div 2.
                else n >>= 1; //shft opr( same n /= 2)
                cycle_length++;
            }
            
            if ( cycle_length > max_cycle_length )
                max_cycle_length = cycle_length;
        }
        
        printf ("%d %d %d\n", tmp_i, tmp_j, max_cycle_length);
        
    }
    
    return 0;
}
