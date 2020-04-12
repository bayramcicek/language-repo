package java004;

/**
 * created by cicek on 19.10.2018 17:29
 */

public class J00_main4 {
    public static void main(String[] args){

        int number = 5;

        addOne(number);
        System.out.printf("%d\n", number); // 5

        subtract(number);
        System.out.printf("%d\n", number); // 5

    } // main

    static void addOne(int num){
        num += 1;
    }

    public static void subtract(int elem){
        elem -= 1;
    }

    /*
Value types are the basic types, and include byte, short, int, long, float, double, boolean, and char.
These data types store the values assigned to them in the corresponding memory locations.
So, when you pass them to a method, you basically operate on the variable's value, rather than on the variable itself.
     */

} // class
