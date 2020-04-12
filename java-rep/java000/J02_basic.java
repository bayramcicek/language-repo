package java000;

/**
 * created by cicek on 07.10.2018 20:00
 */

public class J02_basic {
    public static void main(String[] args){

        int i = 0;
        if ((5==5) && (3==3)){
            System.out.println("mrb");
        }

        if ((1==5) || (3==3)){
            System.out.println("mrbqq");
        }

        int age = 11;

        if(!(age == 23 )){
            System.out.println("hello");
        }

        switch(age){
            case 11:
                System.out.println("1");
                break;

            case 111:
                System.out.println("11");

            default:
                System.out.println("default");
        }
        // No break is needed in the default case, as it is always the last statement in the switch.

        for(int x=0; x<=10; x += 2) {
            System.out.printf("x: %d\n", x);
        }


        int a = 0;

        do {
            System.out.println(a);
            a++;
        } while (a<0);

    }
}
