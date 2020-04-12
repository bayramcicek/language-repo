package java011;

/**
 * created by cicek on 24.12.2018 05:51
 */

public class SayiMain {
    public static void main(String[] args){

        int x=5;

        System.out.printf("%d",mtd(x++));

    }

    public static int mtd3(int x){
        x = x+25/5+3%2;
        return x;
    }

    public static int mtd2(int x){
        return mtd3(x*=3);
    }
    public static int mtd(int x){
        return mtd2(x++);
    }


}
