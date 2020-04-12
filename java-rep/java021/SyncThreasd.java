package java021;

/**
 * created by cicek on 10.02.2019 18:22
 */

public class SyncThreasd extends Thread{
    @Override
    public void run() {
        display();
    }

    synchronized static void display(){
        int x = 0;

        while(x<10){

            System.out.println(x);
            x++;

            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
        }
    }

}
/*

// synchronized static void display()

Thread running!
Game Thread running...
running...2
running...3
running...1
running...4
running...5
running...6
running...7
Runnable running
0
1
2
3
4
5
6
7
8
9
0
1
2
3
4
5
6
7
8
9
0
1
2
3
4
5
6
7
8
9

// public static void display()

Thread running!
Game Thread running...
running...1
running...3
running...2
running...5
running...4
running...6
running...7
Runnable running
0
0
0
1
1
1
2
2
2
3
3
3
4
4
4
5
5
5
6
6
6
7
7
7
8
8
8
9
9
9

 */
