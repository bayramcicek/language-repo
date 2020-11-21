// C11 standard
// created by cicek on Nov 21, 2020 12:51 PM

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {

    // create and open a text file - output file stream
    ofstream MyFile("./test.txt");

    // write
    MyFile << "Files can be tricky, but it is fun enough!";

    // close the file
    MyFile.close();

    string myText;

    try {
        // read
        ifstream MyReadFile("test.txt");

        while (getline(MyReadFile, myText)) {
            cout << myText;
        }
        MyReadFile.close();
    } catch (exception e) {
        cout << "hata oluuştu" << e.what();
    }
    return 0;
}
