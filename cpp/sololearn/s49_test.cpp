// C11 standard
// created by cicek on Feb 07, 2021 5:06 PM

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {

    double a = 1;
    cout << a << endl; // 1

    char *str = "hello";
    cout << *(str+4) << endl; // o
    cout << str[1] << endl; // e
    cout << *str << endl; // h
    cout << str << endl; // hello

    string abc = "hi";
    cout << abc[44] << endl; // nothing
    cout << abc[0] << endl; // h
    cout << abc[1] << endl; // i
    cout << abc << endl; // hi

    return 0;
}
