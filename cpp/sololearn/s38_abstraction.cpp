// C11 standard
// created by cicek on Feb 06, 2021 8:06 PM

#include <iostream>
#include <string>

using namespace std;

/*
 * The virtual member functions without definition are known as pure virtual functions.
 * They basically specify that the derived classes define that function on their own.
The syntax is to replace their definition by =0 (an equal sign and a zero):
 */
class Enemy1 {
public:
    virtual void attack() = 0;
    // The = 0 tells the compiler that the function has no body.
};

/*
 * A pure virtual function basically defines, that the derived classes will have that function defined on their own.
Every derived class inheriting from a class with a pure virtual function must override that function.

 If the pure virtual function is not overridden in the derived class,
 the code fails to compile and results in an error when you try to instantiate an object of the derived class.
 */

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

    /*
     * These classes are called abstract. They are classes that can only be used as base classes,
     * and thus are allowed to have pure virtual functions.

You might think that an abstract base class is useless, but it isn't. It can be used to
     create pointers and take advantage of all its polymorphic abilities.
For example, you could write:
     */

    Ninja1 n;
    Monster1 m;

    Enemy1 *e1 = &n;
    Enemy1 *e2 = &m;

    e1->attack(); // Outputs "Ninja!"
    e2->attack(); // Outputs "Monster!"

    /*
     * In this example, objects of different but related types are referred to using a unique type of pointer (Enemy*),
     * and the proper member function is called every time, just because they are virtual.
     */

    // A pure virtual function has no body and must be implemented in derived classes.

    /*
     * You cannot create objects of the base class with a pure virtual function.
Running the following code will return an error:

     Enemy1 e;

     */

    // An abstract class is a class that has a pure virtual function.

    return 0;
}
