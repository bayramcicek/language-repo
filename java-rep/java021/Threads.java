package java021;

/**
 * created by cicek on 10.02.2019 17:28
 */

public class Threads {
    public static void main(String[] args){

        Loader loader = new Loader();
        loader.start();

        Game game = new Game();
        game.start();

        RandThread rand1 = new RandThread(1);
        RandThread rand2 = new RandThread(2);
        RandThread rand3 = new RandThread(3);
        RandThread rand4 = new RandThread(4);
        RandThread rand5 = new RandThread(5);
        RandThread rand6 = new RandThread(6);
        RandThread rand7 = new RandThread(7);

        rand1.start();
        rand2.start();
        rand3.start();
        rand4.start();
        rand5.start();
        rand6.start();
        rand7.start();

        Thread t = new Thread(new MyRunnableClass());
        t.start();

        SyncThreasd t1 = new SyncThreasd();
        t1.start();
        SyncThreasd t2 = new SyncThreasd();
        t2.start();
        SyncThreasd t3 = new SyncThreasd();
        t3.start();

    }
}
