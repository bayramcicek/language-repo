// C11 standard
// created by cicek on Feb 06, 2021 3:35 PM

#include <iostream>
#include <string>

using namespace std;

/*
 * When inheriting classes, the base class' constructor and destructor are not inherited.
However, they are being called when an object of the derived class is created or deleted.
 */

class Mother12 {
public:
    Mother12()
    {
        cout <<"Mother ctor"<<endl;
    }
    ~Mother12()
    {
        cout <<"Mother dtor"<<endl;
    }
};

class Daughter12: public Mother12 {
public:
    Daughter12()
    {
        cout <<"Daughter ctor"<<endl;
    }
    ~Daughter12()
    {
        cout <<"Daughter dtor"<<endl;
    }
};

int main(int argc, char **argv) {

//    Mother12 m;
    Daughter12 d;
    /* out:
     *  Mother ctor
        Daughter ctor
        Daughter dtor
        Mother dtor
     */

    /*
     * Note that the base class' constructor is called first, and the derived class' constructor is called next.
When the object is destroyed, the derived class's destructor is called, and then the base class' destructor is called.
You can think of it as the following: The derived class needs its base class in order to work
     - that is why the base class is set up first.
     */

    /*
Constructors
The base class constructor is called first.

Destructors
The derived class destructor is called first, and then the base class destructor gets called.

This sequence makes it possible to specify initialization and de-initialization scenarios for your derived classes.
     */


    return 0;
}
