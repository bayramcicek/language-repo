package java005;

/**
 * created by cicek on 19.10.2018 18:41
 */

import java002.J02_class;

public class J00_math {
    public static void main(String[] args){

        int a = Math.abs(-45); // 45
        double c = Math.ceil(7.342);  // 8.000000
        double f = Math.floor(7.843);  // 7.000000
        int m = Math.max(10, 20);  // 20
        double p = Math.pow(2, 6); // 64.000000

        System.out.printf("%d\n%f\n%f\n%d\n%f\n\n", a, c, f, m, p);

        /*******************************************************************************/

        J01_static c1 = new J01_static();
        System.out.printf("%d\n", c1.COUNT); // 1
        System.out.printf("%d\n", J01_static.COUNT); // 1
        System.out.printf("%d\n\n", c1.MYCAR); // 21

        J01_static c2 = new J01_static();
        J01_static c3 = new J01_static();
        J01_static c4 = new J01_static();

        System.out.printf("%d\n", c1.COUNT); // 4
        System.out.printf("%d\n", c3.COUNT); // 4
        System.out.printf("%d\n", J01_static.COUNT); // 4

        System.out.printf("c4 : MYCAR %d\n\n", c4.MYCAR); // 21
        System.out.printf("%d\n", c4.COUNT); // 4

        // Now, the horn method can be called without creating an object:
        J01_static.horn1(); // BEEPPP!

        /*
Another example of static methods are those of the Math class, which is why you can call them without creating a Math object.
Also, the main method must always be static.
         */

        int car = ++(c1.MYCAR);
        System.out.printf("%d\n", car); // 22
        System.out.printf("%d\n", c1.MYCAR); // 22

        J01_static c4q = new J01_static();
        System.out.printf("%d\n", c4q.MYCAR); // 21


        System.out.printf("%f\n", J01_static.PI); // 3.140000

        J02_class a1 = new J02_class();
        System.out.printf("%s\n", a1.getColor()); // red


    }

}
