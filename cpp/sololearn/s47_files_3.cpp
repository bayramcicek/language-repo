// C11 standard
// created by cicek on Feb 07, 2021 4:21 PM

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {

    /*
 * ios::app         -> append to end of file
 * ios::ate         -> go to end of file on opening
 * ios::binary      -> file open in binary mode
 * ios::in          -> open file for reading only
 * ios::out         -> open file for writing only
 * ios::trunc       -> delete the contents of the file if it exists
 */

    /*
     * All these flags can be combined using the bitwise operator OR (|).
For example, to open a file in write mode and truncate it, in case it already exists, use the following syntax:

ofstream outfile;
outfile.open("file.dat", ios::out | ios::trunc );
     */

    // You can read information from a file using an ifstream or fstream object.
    ofstream MyFile1("test.txt");
    MyFile1 << "This is awesome! \n";
    MyFile1.close();

    string line;
    ifstream MyFile("test.txt");

    // The getline function reads characters from an input stream and places them into a string.
    while (getline(MyFile, line)) {
        cout << line << '\n';
    } // while loop uses the getline function to read the file line by line.
    MyFile.close();

    return 0;
}
