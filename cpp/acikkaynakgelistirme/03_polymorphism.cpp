// C11 standard
// created by cicek on Nov 21, 2020 12:45 PM

#include <iostream>
#include <string>

using namespace std;

// base class
class Animal {
public:
    void animalSound() {
        cout << "Base class sound\n";
    }
};

class Pig : public Animal {
public:
    void animalSound() {
        cout << "Pig sound\n";
    }
};

class Dog : public Animal {
public:
    void animalSound() {
        cout << "Dog sound\n";
    }
};

int main(int argc, char **argv) {

    Animal obj;
    obj.animalSound();  // Base class sound

    Dog objDog;
    objDog.animalSound();  // Dog sounds

    return 0;
}
