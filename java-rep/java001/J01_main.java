package java001;

/**
 * created by cicek on 17.10.2018 20:58
 */

public class J01_main {
    public static void main(String[] args){

        J01_animal dog = new J01_animal();
        dog.bark();

        dog.color = "green";
        dog.bark();


//          Now, dog is an object of type Animal. Thus we can call its bark() method,
//          using the name of the object and a dot.
//          The dot notation is used to access the object's attributes and methods.

    }
}
