package java015;

/**
 * created by cicek on 27.01.2019 22:28
 */

public class Typecast {
    public static void main(String[] args){

        /*
        Assigning a value of one type to a variable of another type is known as Type Casting.

To cast a value to a specific type, place the type in parentheses and position it in front of the value.
         */

        int a = (int) 3.14;
        System.out.println(a);
        //Outputs 3

        // The code above is casting the value 3.14 to an integer, with 3 as the resulting value.

        double b = 42.571;
        int c = (int) b;
        System.out.println(c);
//Outputs 42

        /*
        Java supports automatic type casting of integers to floating points, since there is no loss of precision.
On the other hand, type casting is mandatory when assigning floating point values to integer variables.
         */

        // downcasting

        /*
        Why is upcasting automatic, downcasting manual?
        Well, upcasting can never fail.
        But if you have a group of different Animals and want to downcast them all to a Cat,
        then there's a chance that some of these Animals are actually Dogs, so the process fails.
         */

        /*Upcasting*/

//        You can cast an instance of a subclass to its superclass.

//        Consider the following example, assuming that Cat is a subclass of Animal.
//        Animal a = new Cat();
//
//        Java automatically upcasted the Cat type variable to the Animal type.
//
         /*Downcasting */

//        Casting an object of a superclass to its subclass is called downcasting.
//        Example:

//        Animal a = new Animal();
//        ((Cat)a).makeSound();
//
//        This will try to cast the variable a to the Cat type and call its makeSound() method.


    }
}
