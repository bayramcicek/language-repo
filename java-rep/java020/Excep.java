package java020;

/**
 * created by cicek on 08.02.2019 21:00
 */

public class Excep {
    public static void main(String[] args) throws Exception{

        int a = 5;
        int b = 1;

        try {
            int c  = a/b;
        } catch (Exception e){
            System.out.printf("error ! %s", e);
        }

        System.out.printf("as %s", div(4,1));


    }

    public static int div(int aa, int ba){
        if(ba == 0) {
            throw new ArithmeticException("Division by Zero");
        } else {
            int as = aa / ba;
            return as;
        }
    }
}
