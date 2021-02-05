// C11 standard
// created by cicek on Feb 04, 2021 7:48 PM

#include <iostream>
#include <string>

#ifndef CPP_COMPOSITION_H
#define CPP_COMPOSITION_H

/*
 * In the real world, complex objects are typically built using smaller, simpler objects.
 * For example, a car is assembled using a metal frame, an engine, tires,
 * and a large number of other parts. This process is called composition.

In C++, object composition involves using classes as member variables in other classes.
This sample program demonstrates composition in action. It contains Person and Birthday classes,
 and each Person will have a Birthday object as its member.
 */

// Our Birthday class has three member variables.
// It also has a constructor that initializes the members using a member initialization list.

class Birthday {
public:
    Birthday(int m, int d, int y)
            : month(m), day(d), year(y) {
    }

    void printDate();

private:
    int month;
    int day;
    int year;
};

#endif //CPP_COMPOSITION_H
