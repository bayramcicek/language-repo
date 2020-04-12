package java011;

/**
 * created by cicek on 24.12.2018 05:38
 */

public class mainn {
    public static void main(String[] args){

        Sinif1 s2;
        Sinif2 s3, s4;
        Sinif3 s5, s6;

        s2 = new Sinif2();
        s3 = new Sinif2();

        s4 = new Sinif3();
        s5 = new Sinif3();

        s2.mtd(); // Sinif2
        s4.mtd(); // Sinif3

        ((Sinif2) s2).mtd1(); // AAA
        s5.mtd1(); // BBB

    }
}
