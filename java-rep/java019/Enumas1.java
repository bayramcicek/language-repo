package java019;

/**
 * created by cicek on 30.01.2019 15:37
 */

public class Enumas1 {

    public enum Rank{
        SOLDIER,
        CAPTAIN,
        SERGEANT
    }
    public static void main(String[] args){

        // An Enum is a special type used to define collections of constants.
        Rank a = Rank.SOLDIER;

        switch(a) {
            case SOLDIER:
                System.out.println("Soldier says hi!");
                break;
            case SERGEANT:
                System.out.println("Sergeant says Hello!");
                break;
            case CAPTAIN:
                System.out.println("Captain says Welcome!");
                break;
        }
//Outputs "Soldier says hi!"

        /*
        You should always use Enums when a variable (especially a method parameter) can only take one out of a small set of possible values.
If you use Enums instead of integers (or String codes), you increase compile-time checking and avoid errors from passing in invalid constants, and you document which values are legal to use.
Some sample Enum uses include month names, days of the week, deck of cards, etc.
         */


    }

}
