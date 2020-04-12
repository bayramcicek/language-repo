/**
 * created by cicek on 24.12.2018 03:21
 */

public class BubbleSort {
    public static void main(String[] args){

        int[] marr = {99,34,0,5,2,8,1,3};
        sirala(marr);

        for (int i:marr){
            System.out.printf("hh: %d\n", i);
        }

    }
    public static void sirala(int[] myArr){

        for (int i=1; i<myArr.length; i++){
            for (int a=0; a<myArr.length-i; a++){

                if (myArr[a]>myArr[a+1]){

                    int temp;
                    temp = myArr[a];
                    myArr[a] = myArr[a+1];
                    myArr[a+1] = temp;

                }
            }
        }


    }
}
