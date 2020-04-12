package java018;

/**
 * created by cicek on 29.01.2019 20:36
 */

public class Maaaaa {

    /*
     == -> is a reference comparison, i.e. both objects point to the same memory location
i.e.  a.x == b.x is false : these are two different objects therefore they are not equal.

.equals() -> evaluates to the comparison of values in the objects
i.e. a.x.equals( b.x ) is true: both hold the value 5.
     */

    public static void main(String[ ] args) {
        Ani123 a1 = new Ani123("Robby");
        Ani123 a2 = new Ani123("Robby");
        System.out.println(a1.equals(a2)); // true
        System.out.println(a1 == a2); // false
    }
//Outputs true
}

/*
The automatically generated hashCode() method is used to determine where to store the object internally.
Whenever you implement equals, you MUST also implement hashCode.
 */
