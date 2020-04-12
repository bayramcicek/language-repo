package java000;

/**
 * created by cicek on 07.10.2018 21:24
 */

public class J03_array {
    public static void main(String[] args){

        // Now, you need to define the array's capacity, or the number of elements it will hold. To accomplish this, use the keyword new.
        int[] arr = new int[2];
        arr[0] = 45;
        arr[1] = 5;
        System.out.printf("arr[0]: %d", arr[0]);

        String[] myName = {"one", "two"};
        System.out.println("\nmyName[0]: " + myName[0]);
        System.out.printf("myName[1]: %s \n", myName[1]);
        System.out.println(myName.length);

        int sum = 0;
        for (int i=0; i<arr.length; i++){
            System.out.printf("array: %d\n", arr[i] );
            sum = sum + arr[i];
        }
        System.out.printf("sum: %d\n", sum); // 50

        for (int t: arr){
            System.out.printf("\neleman: %d", t);
        }

        int[][] sample = {{1, 2, 3},
                          {4, 999, 6}};
        System.out.printf("\nsample[1][1]: %d\n", sample[1][1]);

        int[][] myArr = {{12, 23, 2, 45},
                         {4},
                         {5565, 666, 733}};
//        myArr[0][2] = 42;
//        int x = myArr[1][0]; // 4
//        System.out.printf("\nmyArr[0][2]: %d\n", myArr[0][2]);

//        for (int ad: myArr){
//            System.out.printf("elements: %d", ad);
//        }
        for (int row =0; row < myArr.length; row++){
            for (int column = 0; column < myArr[row].length; column++){
                System.out.printf("\nelements %d: %d", row, myArr[row][column]);
            }
            System.out.printf("\n");
        }

    }
}
