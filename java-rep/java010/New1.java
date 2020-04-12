package java010;

/**
 * created by cicek on 20.11.2018 19:19
 */

public class New1 {
    public static void main(String[] args){

        New2 obj2 = new New2(), obj3 = new New3();

        obj2.make(2); // New2: 2
        obj3.make(3); // New2: 123
        obj2.make(); // New3

        New3 n3 = new New3();
        n3.make(); // New3
        n3.make(564); // New2: 564

    }
}
