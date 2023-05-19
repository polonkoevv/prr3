#include <iostream>
#include <cstdlib>
#include "pow.h"
using namespace std;

#include <iostream>
#include <cstdlib>

int main() {
    const char* a = getenv("PARAMETER_A");
    const char* b = getenv("PARAMETER_B");

    float x = 4;
    int y = 2;
    
    cout << pow(x,y) << endl;

    return 0;
}


