package java022;

import java.util.HashMap;

/**
 * created by cicek on 09.03.2019 21:39
 */

public class HashMapClass {
    public static void main(String[] args){

        /*
        Arrays and Lists store elements as ordered collections, with each element given an integer index.
HashMap is used for storing data collections as key and value pairs. One object is used as a key (index) to another object (the value).
The put, remove, and get methods are used to add, delete, and access values in the HashMapClass.
         */

        HashMap<String, Integer> points = new HashMap<String, Integer>();
        points.put("hello1", 34);
        points.put("hello2", 2342);
        points.put("hello3", 8); //
        points.put("hello3", 23); // 23 will have printed

        System.out.printf("hash : %d\n", points.get("hello3")); // hash : 23
        System.out.printf("hash : %d", points.get("hello45")); // hash : null
        // null is a special type that represents the absence of a value.


    }
}
