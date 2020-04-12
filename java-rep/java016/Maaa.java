package java016;

/**
 * created by cicek on 29.01.2019 17:21
 */
// Anonymous classes are a way to extend the existing classes on the fly.
public class Maaa {
    public static void main(String[] args){

        Machine1 m = new Machine1(){
            @Override
            public void start() {
                super.start(); // Starting
                System.out.printf("helloooo...\n"); // helloooo
            }
        };

        m.start();

        Machine1 mm = new Machine1();
        mm.start(); // Starting

        Rbot r= new Rbot(56);

    }
}
