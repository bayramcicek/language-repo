// C11 standard
// created by cicek on Feb 06, 2021 7:51 PM

#include <iostream>
#include <string>

using namespace std;

// A virtual function is a base class function that is declared using the keyword virtual.
class Enemyv {
public:
    virtual void attack() {
    }
};

class Ninjav : public Enemyv {
public:
    void attack() {
        cout << "Ninja!" << endl;
    }
};

class Monsterv : public Enemyv {
public:
    void attack() {
        cout << "Monster!" << endl;
    }
};

int main(int argc, char **argv) {

    Ninjav n;
    Monsterv m;
    Enemyv *e1 = &n;
    Enemyv *e2 = &m;

    e1->attack();
    e2->attack();
    /*
     * As the attack() function is declared virtual, it works like a template,
     * telling that the derived class might have an attack() function of its own.
     */

    /*
     * Our game example serves to demonstrate the concept of polymorphism; we are using Enemy pointers to call
     * the same attack() function, and generating different results.
     */

    /*
     * If a function in the base class is virtual, the function's implementation in the derived class is
     * called according to the actual type of the object referred to, regardless of the declared type of the pointer.
A class that declares or inherits a virtual function is called a polymorphic class.
     */

    // A class is called polymorphic if it has a virtual function

    return 0;
}
