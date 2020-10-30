//
// Created by aproemkin on 29.10.2020.
//

#include "strCalc.h"


int Calc::fact(int number){
    int result = 1;
    if ( number > 0){
        while(number>1){
            result = result*number;
            --number;
        }
    }
    else if ( number < 0 ) {
        number = -1;
    }

    return number;
}