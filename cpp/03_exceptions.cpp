// C11 standard
// created by cicek on Nov 21, 2020 3:12 PM

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {

    try {
        int age = 19;
        if (age > 18) {
            cout << "büyüksün";

        } else {
            throw age;
        }
    } catch (int myNum) {
        cout << "access denied " << myNum;

    }
    return 0;
}
