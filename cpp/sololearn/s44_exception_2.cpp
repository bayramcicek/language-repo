// C11 standard
// created by cicek on Feb 07, 2021 3:53 PM

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {

    try {
        int num1;
        cout << "Enter the first number:";
        cin >> num1;

        int num2;
        cout << "Enter the second number:";
        cin >> num2;

        if (num2 == 0) {
            throw 0;
        }

        cout << "Result:" << num1 / num2;
    }
    catch (int x) {
        cout << "Division by zero!";
    }
    /*
     In our case, we catch exceptions of type integer only. It's possible to specify that your catch
     block handles any type of exception thrown in a try block. To accomplish this, add an
     ellipsis (...) between the parentheses of catch:

     catch (...) {
        cout << "Division by zero!";
    }
     */

    return 0;
}
