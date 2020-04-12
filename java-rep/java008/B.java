package java008;

/**
 * created by cicek on 03.11.2018 19:28
 */

public class B extends A{

    protected int num = 50;

    public B(){

//        super();
        System.out.printf("new B\n");
        System.out.printf("%d\n", num); // 50
        System.out.printf("%d\n", super.num); // 100


    }

}
