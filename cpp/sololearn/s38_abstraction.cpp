// C11 standard
// created by cicek on Feb 06, 2021 8:06 PM

#include <iostream>
#include <string>

using namespace std;

class Enemy1 {
public:
    virtual void attack() {
        cout << "Enemy!" << endl;
    }
};

class Ninja1 : public Enemy1 {
public:
    void attack() {
        cout << "Ninja!" << endl;
    }
};

class Monster1 : public Enemy1 {
public:
    void attack() {
        cout << "Monster!" << endl;
    }
};

int main(int argc, char **argv) {

    Ninja1 n;
    Monster1 m;
    Enemy1 e;

    Enemy1 *e1 = &n;
    Enemy1 *e2 = &m;
    Enemy1 *e3 = &e;

    e1->attack();
    // Outputs "Ninja!"

    e2->attack();
    // Outputs "Monster!"

    /*
     * Now, when you create an Enemy pointer, and call the attack() function,
     * the compiler will call the function, which corresponds to the object's type, to which the pointer points:
     */

    e3->attack();
    // Outputs "Enemy!"

    /*
     * This is how polymorphism is generally used. You have different classes with a function of the same name,
     * and even the same parameters, but with different implementations.
     */

    // When a virtual function is called via base class pointer it calls those class' function to which the base class pointer points

    return 0;
}
