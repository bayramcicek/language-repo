// C11 standard
// created by cicek on Feb 06, 2021 7:24 PM

#include <iostream>
#include <string>

using namespace std;

// Briefly, polymorphism is one function, with different implementations.

/*
 * Polymorphism can be demonstrated more clearly using an example:
Suppose you want to make a simple game, which includes different enemies: monsters, ninjas, etc.
 All enemies have one function in common: an attack function. However, they each attack in a different way.
 In this situation, polymorphism allows for calling the same attack function on different objects,
 but resulting in different behaviors.
 */

class Enemy {
protected:
    int attackPower;
public:
    void setAttackPower(int a) {
        attackPower = a;
    }
};

// Our Enemy class has a public method called setAttackPower, which sets the protected attackPower member variable.

/*
 * Our second step is to create classes for two different types of enemies, Ninjas and Monsters.
 * Both of these new classes inherit from the Enemy class, so each has an attack power.
 * At the same time, each has a specific attack function.
 */

class Ninja : public Enemy {
public:
    void attack() {
        cout << "Ninja! - " << attackPower << endl;
    }
};

class Monster : public Enemy {
public:
    void attack() {
        cout << "Monster! - " << attackPower << endl;
    }
};


int main(int argc, char **argv) {

    /*
     * The word polymorphism means "having many forms".
Typically, polymorphism occurs when there is a hierarchy of classes and they are related by inheritance.

C++ polymorphism means that a call to a member function will cause a different implementation
     to be executed depending on the type of object that invokes the function.
Simply, polymorphism means that a single function can have a number of different implementations.
     */

    // As you can see, their individual attack functions differ.
    Ninja n;
    Monster m;

    /*
     * Ninja and Monster inherit from Enemy, so all Ninja and Monster objects are Enemy objects.
     * This allows us to do the following:
     */

    Enemy *e1 = &n;
    Enemy *e2 = &m;
    // We've now created two pointers of type Enemy, pointing them to the Ninja and Monster objects.

    // Now, we can call the corresponding functions:
    e1->setAttackPower(23);
    e2->setAttackPower(565);

    n.attack();
    m.attack();
    // Ninja! - 23
    // Monster! - 565

    /*
     * We would have achieved the same result by calling the functions directly on the objects.
     * However, it's faster and more efficient to use pointers.
Also, the pointer demonstrates, that you can use the
     Enemy pointer without actually knowing that it contains an object of the subclass.
     */

    return 0;
}
