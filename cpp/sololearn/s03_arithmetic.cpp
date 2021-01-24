// C11 standard
// created by cicek on Jan 24, 2021 7:51 PM

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {

    int x = 10 / 3;
    cout << x << endl; // 3

    int y = 25 % 7;
    cout << y; // 4
    /*If none of the expressions are in parentheses, multiplicative (multiplication, division, modulus)
     * operators will be evaluated before additive (addition, subtraction) operators.*/

    int w = 10;
    w += 4; // equivalent to x = x + 4
    w -= 5; // equivalent to x = x - 5

    w++; // equivalent to x = x + 1

    int s = 5;

    // Prefix increments the value, and then proceeds with the expression.
    ++s; // prefix

    // Postfix evaluates the expression and then performs the incrementing.
    s++; // postfix

    s--;


    return 0;
}
