package java010;

/**
 * created by cicek on 20.11.2018 16:38
 */

public class New0 { // Another name for method overloading is compile-time polymorphism.

    public static void fun1(int a, int b){
        System.out.printf("res1: %d\n", a+b);
    }

    public static void fun1(int a, int b, int c){
        System.out.printf("res2: %d\n", a+b+c);
    }

    protected static int fun1(int a){
        return a;
    }

    double fun1(double a, double b){
        return a/b;
    }

    public static void main(String[] args){

        New0.fun1(3, 4); // res1: 7
        fun1(4,5, 6); // res2: 15

        int sd = fun1(3);
        System.out.printf("%d\n", sd); // 3

        New0 ne = new New0();

        double aa = ne.fun1(5.0,2.0);
        System.out.printf("%f\n", aa); // 2.500000

        ne.a();
    }

    public void a(){

        New0.fun1(3, 4); // res1: 7
        fun1(4,5, 6); // res2: 15

        int sd = fun1(3);
        System.out.printf("%d\n", sd); // 3

        New0 ne1 = new New0();

        double awa = ne1.fun1(5.0,2.0);
        System.out.printf("%f\n", awa); // 2.500000

        System.out.printf("%f\n", fun1(2.3, 34.6)); // double non-static
        System.out.printf("%f\n", ne1.fun1(2.3, 34.6)); // double non-static


    }

}
