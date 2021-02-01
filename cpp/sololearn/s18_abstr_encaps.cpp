// C11 standard
// created by cicek on Feb 01, 2021 7:44 PM

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {

    /*Data abstraction is the concept of providing only essential information to the outside world.
     * It's a process of representing essential features without including implementation details.

A good real-world example is a book: When you hear the term book, you don't know the exact specifics,
     i.e.: the page count, the color, the size, but you understand the idea of a book - the abstraction of the book.
The concept of abstraction is that we focus on essential qualities,
     rather than the specific characteristics of one particular example.
     */

    /*
     * Abstraction means, that we can have an idea or a concept that is completely separate from any specific instance.
It is one of the fundamental building blocks of object oriented programming.

For example, when you use cout, you're actually using the cout object of the class ostream.
     This streams data to result in standard output.

     In this example, there is no need to understand how cout will display the text on the user's screen.
     The only thing you need to know to be able to use it is the public interface.
     */

    // Which statement about abstraction is true?: We can have a concept, but it's separate from any specific instance

    /*
     * Abstraction allows us to write a single bank account class, and then create different objects based on the class,
     * for individual bank accounts, rather than creating a separate class for each bank account.
     */

    /*
 * Encapsulation

Part of the meaning of the word encapsulation is the idea of "surrounding" an entity, not just to keep
 what's inside together, but also to protect it.
In object orientation, encapsulation means more than simply combining attributes and behavior together
 within a class; it also means restricting access to the inner workings of that class.

The key principle here is that an object only reveals what the other application components require to
 effectively run the application. All else is kept out of view.
This is called data hiding.
 */

    // Encapsulation allows you to: Hide details of a class realization.
    /*
     * In summary the benefits of encapsulation are:
- Control the way data is accessed or modified.
- Code is more flexible and easy to change with new requirements.
- Change one part of code without affecting other part of code.

     For example, if we take our BankAccount class, we do not want some other part of our program to
     reach in and change the balance of any object, without going through the deposit() or withdraw() behaviors.
We should hide that attribute, control access to it, so it is accessible only by the object itself.
This way, the balance cannot be directly changed from outside of the object and is accessible only using its methods.
This is also known as "black boxing", which refers to closing the inner working zones of the object, except of the
     pieces that we want to make public.
     */

    /*
     * The idea of encapsulation is (select two):
     * - To encapsulate an object's attributes and methods.
     * - To hide everything about the object, only exposing what is necessary.
     */

    return 0;
}
