// C11 standard
// created by cicek on Nov 21, 2020 12:39 PM

#include <iostream>
#include <string>

using namespace std;

// base class
class Vehicle {
public:
    string brand = "Ford";

    void honk() {
        cout << "FORD !!!\n";
    }
};

// derived class
class Car: public Vehicle {
public:
    string model = "Mustang";
};

int main(int argc, char **argv) {

    Car carObj;
    carObj.honk(); // FORD !!!
    cout << carObj.brand + " " + carObj.model; // Ford Mustang

    return 0;
}
