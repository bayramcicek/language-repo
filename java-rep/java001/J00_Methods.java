package java001;

/**
 * created by cicek on 17.10.2018 19:57
 */

public class J00_Methods {

    void sayHello(String name){
        System.out.printf("Say hello! %s", name);
    }

    static int sum(int val1, int val2){
        return (val1 + val2);
    }

    public static void main(String[] args){

        J00_Methods aaal = new J00_Methods();
        aaal.sayHello("david");

        int i = sum(4, 5);
        System.out.printf("\n%d", i);

        /*
        * why does the main method takes an array of strings as arguments?
The lines of code are taken as strings when it compiles
Operating system calls main method by giving strings as arguments.

         * */

    }
}
