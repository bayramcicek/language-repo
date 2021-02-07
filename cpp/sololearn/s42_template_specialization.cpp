// C11 standard
// created by cicek on Feb 07, 2021 2:55 PM

#include <iostream>
#include <string>

using namespace std;

template<class T>
class MyClassr {
public:
    MyClassr(T x) {
        cout << x << " -  not a char" << endl;
    }
};

template<>
class MyClassr<char> {
public:
    MyClassr(char x) {
        cout << x << " is a char!" << endl;
    }
};

int main(int argc, char **argv) {

    /*
     * In case of regular class templates, the way the class handles different data types is the same;
     * the same code runs for all data types.
Template specialization allows for the definition of a different implementation of a template when a
     specific type is passed as a template argument.
     */

    MyClassr<int> ob1(42);
    MyClassr<double> ob2(5.47);
    MyClassr<char> ob3('s');

    /*
     * As you can see, the generic template worked for int and double.
     * However, our template specialization was invoked for the char data type.
     */

    /*
     * Keep in mind that there is no member "inheritance" from the generic template to the specialization,
     * so all members of the template class specializations must be defined on their own.
     */

    return 0;
}
