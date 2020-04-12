package java021;

/**
 * created by cicek on 10.02.2019 17:55
 */

public class RandThread extends Thread{

    int num = 0;

    RandThread(int num){
        this.num = num;
    }

    @Override
    public void run() {
        System.out.printf("running...%d\n", num);
    }
}

/*
running...1
running...2
running...3
running...4
running...5
running...6
running...7

running...1
running...2
running...3
running...5
running...4
running...6
running...7

running...1
running...2
running...4
running...6
running...5
running...3
running...7

Thread running!
running...1
Game Thread running...
running...2
running...3
running...4
running...5
running...6
running...7

running...1
running...3
running...2
running...4
running...6
running...5
running...7
 */
