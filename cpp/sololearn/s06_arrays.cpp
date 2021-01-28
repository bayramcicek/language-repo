// C11 standard
// created by cicek on Jan 28, 2021 6:23 PM

#include <iostream>

using namespace std;

int main(int argc, char **argv) {

    /*An array is used to store a collection of data, but it may be useful to think of an array as a
     * collection of variables that are all of the same type. Instead of declaring multiple variables
     * and storing individual values, you can declare a single array to store all the values.
    When declaring an array, specify its element types, as well as the number of elements it will hold.*/

    int a[5];
    int b[5] = {11, 22, 33, 44, 55};
    int c[] = {11, 22, 33, 44, 22};

    int x[3][4];
    int y[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
    };

    cout << y[1][1] << endl;  // 5
    // Arrays more than three dimensions are harder to manage.


    return 0;
}
