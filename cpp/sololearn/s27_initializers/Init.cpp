// C11 standard
// created by cicek on Feb 04, 2021 6:57 PM

#include <iostream>
#include <string>
#include "Init.h"

using namespace std;

Init::Init(int a, int b) : regVar(a), constVar(b) {
// Even in cases in which member variables are not constant, it makes good sense to use the member initializer syntax.
    cout << regVar << endl;
    cout << constVar << endl;
}

int main(int argc, char **argv) {

    // A constant member variable must be initialized in the constructor initializer list.

    Init(234, 333);
    return 0;
}


