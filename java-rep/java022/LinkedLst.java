package java022;

import java.util.LinkedList;

/**
 * created by cicek on 20.02.2019 22:34
 */

public class LinkedLst {
    public static void main(String[] args){

        LinkedList<String> c = new LinkedList<String>();
        c.add("Red");
        c.add("Blue");
        c.add("Green");
        c.add("Orange");
        c.remove("Green");
        System.out.printf("%s\n", c); // [Red, Blue, Orange]
        System.out.printf("%s\n", c.get(1)); // Blue

        /*
The ArrayList is better for storing and accessing data, as it is very similar to a normal array.
The LinkedList is better for manipulating data, such as making numerous inserts and deletes.

In addition to storing the object, the LinkedList stores the memory address (or link) of the element that follows it.
It's called a LinkedList because each element contains a link to the neighboring element.

         */

        for (String i: c
             ) {
            System.out.printf("\n\n%s\n", i);
        }

        /*
        Summary:
- Use an ArrayList when you need rapid access to your data.
- Use a LinkedList when you need to make a large number of inserts and/or deletes.
         */

    }

}
