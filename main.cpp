#include <iostream>
#include <cstdlib>
#include "pow.h"
using namespace std;

#include <iostream>
#include <cstdlib>

int main() {
    const char* x = getenv("PARAMETER_X");
    const char* y = getenv("PARAMETER_Y");

    int step = pow(atoi(x),atoi(y));
    
    cout << step << endl;

    return 0;
}


