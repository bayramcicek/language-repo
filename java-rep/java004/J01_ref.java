package java004;

/**
 * created by cicek on 19.10.2018 17:57
 */

public class J01_ref {
    public static void main(String[] args){

        /*
There are two types of variables:

1- Primitive variables : those are the known variables with known data types, such as (int x , float y) and these variables contains data.
to declare them we type : Data_type variable;

2- Reference variables : those are variables contains addresses to locations in memory , and they don't contains data.
to declare them we type : Class_name variable;

so in (Class_name variable) "Class_name" is the class name, NOT a data type, and "variable" is a reference variable, NOT an object.
         */


        J02_person j;
        j = new J02_person("John");
        System.out.println(j.getName());

        /*
        When you create an object using the constructor, you create a reference variable.
         */

        j.setAge(20);

        celebrateBirthday(j);

        System.out.printf("%d", j.getAge()); // 21


    } // main

    static void celebrateBirthday(J02_person p){

        p.setAge(p.getAge() + 1);
    }

    /*

The method celebrateBirthday takes a J02_person object as its parameter, and increments its attribute.
Because j is a reference type, the method affects the object itself, and is able to change the actual value of its attribute
     */

} // class
