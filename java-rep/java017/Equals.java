package java017;

/**
 * created by cicek on 29.01.2019 17:59
 */

public class Equals {
    public static void main(String[] args){

        int e = 12;
        int s = 12;
        int a = new Integer(13);

        boolean bool = (e == s); // true
        System.out.printf("res: %b\n", bool);

        System.out.printf("e: %b\nd: %b\na: %b\n", Integer.toHexString(e), Integer.toHexString(s), Integer.toHexString(a));
        System.out.printf("e: %d\nd: %d\na: %d\n", System.identityHashCode(e), System.identityHashCode(s), System.identityHashCode(a));

        String qwe = "foo";
        String asd = "foo";
//        The compiler optimises this by storing "foo" only once, and so:
        System.out.printf("%b\n",qwe == asd);// Returns true.

//        But prevent optimisation like this:
        String qqq = "foo";
        String www = "f";
        www += "oo"; // Now, www is "foo".
        System.out.printf("%s\n", www); // foo
        System.out.printf("%b\n\n\n",qqq == www); // Returns false!

        String some = "some string";
        String other = "some string";


        boolean equal = some.equals(other);
        boolean identical = (some == other);

        System.out.printf("%b\n", equal);
        System.out.printf("%b\n", identical);

        /*
        A variable’s Identity (also called Reference Equality) is defined by the reference it holds.
        If two variables hold the same reference they are identical. This is checked with ==.
         */



    }
}
