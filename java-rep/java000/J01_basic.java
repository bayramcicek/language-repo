package java000;

/**
 * created by cicek on 07.10.2018 18:43
 */

import java.util.Scanner;

public class J01_basic {
    public static void main(String[] args){

        String name ="David";
        int age = 42;
        double score = 15.9;
        char group = 'Z'; // char stands for character and holds a single character.

        boolean online = true;

        int a = 45, b = 34;

        a += 1;
        int c = ++a;
        int d = a++;
        System.out.printf("a: %d\nc: %d\nd: %d\n", a,c,d);


        Scanner myVar = new Scanner(System.in);
        System.out.printf("yaz: \n");
        a = myVar.nextInt();

        System.out.printf("new a: %d\n", a);

        Scanner aaa = new Scanner(System.in);
        System.out.printf("sayi: \n");
        String text = aaa.nextLine();

        System.out.printf("text: %s\n", text);

        System.out.printf("%d\n", Character.BYTES); // 2 byte
        System.out.printf("%d\n", Integer.BYTES); // 4 byte
        System.out.printf("%d\n", Float.BYTES); // 4 byte
        System.out.printf("%d\n", Double.BYTES); // 8 byte


        /*
Read a byte - nextByte()
Read a short - nextShort()
Read an int - nextInt()
Read a long - nextLong()
Read a float - nextFloat()
Read a double - nextDouble()
Read a boolean - nextBoolean()
Read a complete line - nextLine()
Read a word - next()
        * */

        /*
JRE executes the application but JVM reads the instructions line by line so it's interpreter.

JDK=JRE+Development Tools

JRE=JVM+Library Classes
         */


    }
}
