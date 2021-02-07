// C11 standard
// created by cicek on Feb 07, 2021 2:27 PM

#include <iostream>
#include <string>

using namespace std;

// It becomes necessary to write a new function for each new type, such as doubles.
/*
double sum(double a, double b) {
  return a+b;
}

Wouldn't it be much more efficient to be able to write one version of sum() to work with parameters of any type?
Function templates give us the ability to do that!
With function templates, the basic idea is to avoid the necessity of specifying an exact type for each variable.
 Instead, C++ provides us with the capability of defining functions using placeholder types,
 called template type parameters.

To define a function template, use the keyword template, followed by the template type definition:

template <class T> // We named our template type T, which is a generic data type.

 */

// or template<typename T>
template<class T>
T sum(T a, T b) {
    return a + b;
}

template<class T, class U>
T smaller(T a, U b) {
    return (a < b ? a : b);
}

int main(int argc, char **argv) {

    int x = 23, y = 17;
    double xa = 23.3, ya = 17.2;
    // The function returns a value of the generic type T, taking two parameters, also of type T.
    cout << sum(x, y) << endl; // 40
    cout << sum(xa, ya) << endl; // 40.5
    // The compiler automatically calls the function for the corresponding type.

    /*
     * Template functions can save a lot of time, because they are written only once, and work with different types.
Template functions reduce code maintenance, because duplicate code is reduced significantly.
Enhanced safety is another advantage in using template functions, since it's not necessary to
     manually copy functions and change types.
     */

    int xq = 72;
    double yq = 15.34;
    cout << smaller(xq, yq) << endl; // 15
    /*
     * The output converts to an integer, because we specified the function template's return type to be of the same
     * type as the first parameter (T), which is an integer.
     */

    /*
     * T is short for Type, and is a widely used name for type parameters.
It's not necessary to use T, however; you can declare your type parameters using any identifiers that work for you.
     The only terms you need to avoid are C++ keywords.

Remember that when you declare a template parameter, you absolutely must use it in your function definition.
     Otherwise, the compiler will complain!
     */

    // Templates allow us to declare generic types of data.

    return 0;
}
