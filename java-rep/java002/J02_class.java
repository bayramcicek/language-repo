package java002;

/**
 * created by cicek on 19.10.2018 16:00
 */

public class J02_class {

    private String color;

    public J02_class(){ // constructor
        color = "red";
    }

    /*
The J02_class() method is the constructor of our class, so whenever an object of that class is created, the color attribute will be set to "Red".
A constructor can also take parameters to initialize attributes.
     */

    public J02_class(String c){ // constructor
        this.color = c;
    }

//    Constructors are special methods invoked when an object is created and are used to initialize them.
//    A constructor can be used to provide initial values for object attributes.
//
//            - A constructor name must be same as its class name.
    //            - A constructor must have no explicit return type.


    public String getColor(){
        return color;
    }

    public void setColor(String color){
        this.color = color;
    }

    /*
    The keyword this is used to refer to the current object. Basically, this.color is the color attribute of the current object.
     */

    // Getters and setters are fundamental building blocks for encapsulation

//  You can think of constructors as methods that will set up your class by default, so you don’t need to repeat the same code every time.



}
