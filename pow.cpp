#ifndef PR2_POW_CPP
#define PR2_POW_CPP

#include <iostream>
#include <string>

int pow(double x, int y){
    double temp = x;
    for(int i = 1; i < y; i++){
        temp *= x;
    }
    return temp;
}


#endif

