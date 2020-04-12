package java012;

/**
 * created by cicek on 25.12.2018 18:49
 */

public class MyMain {
    public static void main(String[] args){

        MyClass my1 = new MyClass();
        MyClass my2 = new MyClass();
        MyClass my3 = new MyClass();
        MyClass my4 = new MyClass(2);

        my1.sanane(0);
        my2.sanane(2);
        my3.sanane(4);
        my4.sanane(6);

        System.out.printf("my1 toString: %s\n", my1.toString());

        System.out.printf("my2 toString: %s\n", my2.toString());

        System.out.printf("my2 toString: %s\n", my3.toString());

        System.out.printf("my2 toString: %s\n", my4.toString());



    }
}
