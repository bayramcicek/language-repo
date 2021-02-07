// C11 standard
// created by cicek on Feb 07, 2021 4:07 PM

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {

//    /*
//     * You can also provide the path to your file using the ofstream objects constructor,
//     * instead of calling the open function.
//     */
//
//    ofstream MyFile("hey.txt");
//
//    MyFile << "This is awesome! \n";
//    MyFile.close();

/*
 * Under certain circumstances, such as when you don't have file permissions, the open function can fail.
The is_open() member function checks whether the file is open and ready to be accessed.
 */

    ofstream MyFile("test.txt");

    if (MyFile.is_open()) {
        MyFile << "This is awesome! \n";
    } else {
        cout << "Something went wrong";
    }
    MyFile.close();

    return 0;
}
