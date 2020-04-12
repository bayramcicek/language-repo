package java021;

/**
 * created by cicek on 10.02.2019 18:05
 */

public class MyRunnableClass implements Runnable{
    /*
    The other way of creating Threads is implementing the Runnable interface.
    Implement the run() method.
    Then, create a new Thread object, pass the Runnable class to its constructor,
    and start the Thread by calling the start() method.
     */

    @Override
    public void run() {
        System.out.printf("Runnable running\n");
    }
}

/*
Thread running!
Game Thread running...
running...1
running...2
running...3
running...4
running...5
running...6
Runnable running
running...7
 */

/*
It may seem that implementing the Runnable interface is a bit more complex than extending from the Thread class.
However, implementing the Runnable interface is the preferred way to start a Thread,
because it enables you to extend from another class, as well.
 */

/*
The Thread.sleep() method pauses a Thread for a specified period of time.
For example, calling Thread.sleep(1000); pauses the thread for one second.
Keep in mind that Thread.sleep() throws an InterruptedException, so be sure to surround it with a try/catch block.
 */