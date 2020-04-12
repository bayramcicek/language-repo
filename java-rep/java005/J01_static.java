package java005;

/**
 * created by cicek on 19.10.2018 18:51
 */

public class J01_static {

    public static int COUNT = 0;
    /*It’s a common practice to use upper case when naming a static variable, although not mandatory.*/
    public int MYCAR = 20;

    /* Use the final keyword to mark a variable constant, so that it can be assigned only once. */
    public static final double PI = 3.14;
/* PI is now a constant. Any attempt to assign it a value will cause an error. */
/*Methods and classes can also be marked final. This serves to restrict methods so that they can't be overridden and classes so that they can't be subclassed.*/
    J01_static(){
        COUNT++;
        MYCAR++;
    }


    /*
    When you declare a variable or a method as static, it belongs to the class, rather than to a specific instance.
    This means that only one instance of a static member exists,
    even if you create multiple objects of the class, or if you don't create any.
    It will be shared by all objects.
     */

    public static void horn1(){
        System.out.printf("BEEPPP!\n\n");
    }

    /*
                    Non-Static method	                                                                        Static method

Memory is allocated multiple time whenever method is calling.                           Memory is allocated only once at the time of class loading.
It is specific to an object so that these are also known as instance method.            These are common to every object so that it is also known as member method or class method.
These methods always access with object reference. Syntax: Objref.methodname();         These property always access with class reference Syntax: className.methodname();
If any method wants to be execute multiple time that can be declare as non static.      If any method wants to be execute only once in the program that can be declare as static .

     */

    /*
    any instance of an object will have the same access to methods/variables regardless if they're static or not.
    But the key advantage of static methods/variables is in their efficiency.
    They're defined once, and then shared amongst all other instances of objects, as opposed to non-static methods/variables,
    which require new memory each and every time an object is instantiated.
     */


    /*
Accessing a static member via its object is not a good practice.
They can be accessed using fully qualified class name with dot operator as below:

Vehicle.horn();
     */

    /*

The most important part of what he said is that a static variable has a value that is the same for all objects.
For example, if you had a class called Person and you wanted every person to be 21 years old, you would do:

class Person {
   public static int age = 21;
}

This way, every person would have their age variable equal to 21.
     */
}
