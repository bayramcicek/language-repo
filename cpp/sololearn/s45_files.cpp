// C11 standard
// created by cicek on Feb 07, 2021 3:58 PM

#include <iostream>
#include <fstream>

using namespace std;

/*
 * Another useful C++ feature is the ability to read and write to files.
 * That requires the standard C++ library called fstream.
Three new data types are defined in fstream:
ofstream: Output file stream that creates and writes information to files.
ifstream: Input file stream that reads information from files.
fstream: General file stream, with both ofstream and ifstream capabilities that allow it to create,
 read, and write information to files.

To perform file processing in C++, header files <iostream> and <fstream> must be included in the C++ source file.
 */

int main(int argc, char **argv) {

    ofstream MyFile;
    MyFile.open("test.txt");

    MyFile << "Some texqt. \n";
    MyFile.close();

    /*
     * The above code creates an ofstream object called MyFile, and uses the open() function to open the "test.txt"
     * file on the file system. As you can see, the same stream output operator is used to write into the file.
     *
     * If the specified file does not exist, the open function will create it automatically.
     */


    return 0;
}
