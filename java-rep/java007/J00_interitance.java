package java007;

/**
 * created by cicek on 03.11.2018 17:04
 */

public class J00_interitance {
    public static void main(String[] args){

        /*
            Inheritance is the process that enables one class to acquire the properties (methods and variables) of another.
        With inheritance, the information is placed in a more manageable, hierarchical order.

The class inheriting the properties of another is the subclass (also called derived class, or child class);
the class whose properties are inherited is the superclass (base class, or parent class).
         */

        J02_dog d = new J02_dog();
        d.eat();
        d.MyDog();
        System.out.printf("%d\n", d.legs);


    }
}
