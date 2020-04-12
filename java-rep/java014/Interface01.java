package java014;

/**
 * created by cicek on 27.01.2019 21:48
 */

public interface Interface01 {

    /*
An interface is a completely abstract class that contains only abstract methods.
Some specifications for interfaces:
- Defined using the interface keyword.
- May contain only static final variables.
- Cannot contain a constructor because interfaces cannot be instantiated.
- Interfaces can extend other interfaces.
- A class can implement any number of interfaces
     */

    public void mer();
    public void merhaba();

    /*
    Interfaces have the following properties:
- An interface is implicitly abstract. You do not need to use the abstract keyword while declaring an interface.
- Each method in an interface is also implicitly abstract, so the abstract keyword is not needed.
- Methods in an interface are implicitly public.
     */

    // A class can inherit from just one superclass, but can implement multiple interfaces!

    // When you implement an interface, you need to override all of its methods.

}
