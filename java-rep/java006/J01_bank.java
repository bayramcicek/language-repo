package java006;

/**
 * created by cicek on 03.11.2018 16:43
 */

public class J01_bank {

    private double balance = 100;

    public void deposite(double x){

        balance += x;

    }

    public double getBalance(){
        return balance;
    }


}
