// C++17 standard
// created by cicek on Mar 10, 2021 5:14 PM

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv) {

    int a = 10;
    vector<int> test_vector = {1, 2, 3, 4, 5, 6, 7};

//    for (int k : test_vector) {
//        cout << k << " ";
//        ++a;
//        cout << a << endl;
//    }

    for (int i = 0; i < 10; ++i) {
        cout << a << endl;
        ++a;
    }

    return 0;
}
