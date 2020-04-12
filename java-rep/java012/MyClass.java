package java012;

/**
 * created by cicek on 25.12.2018 18:51
 */

public class MyClass {
    private float number;
    private static int sNumber = 2;

    public MyClass(){
        number = sNumber++;
    }

    public MyClass(int i){
        number = i;
    }

    public void sanane(int a) {
        number = number + a/2;
    }

    @Override
    public String toString() {
        return String.format("%s\n", number);
    }
}
