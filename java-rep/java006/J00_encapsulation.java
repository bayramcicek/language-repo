package java006;

/**
 * created by cicek on 03.11.2018 15:42
 */

public class J00_encapsulation {
    public static void main(String[] args){

        // Encapsulation

        /*There are 4 core concepts in OOP: encapsulation, inheritance, polymorphism, and abstraction.
         */
        /*
        The idea behind encapsulation is to ensure that implementation details are not visible to users.
        The variables of one class will be hidden from the other classes, accessible only through the methods of the current class.

        This is called data hiding.

        To achieve encapsulation in Java, declare the class' variables as private and provide public setter and getter methods to modify and view the variables' values.
         */

        J01_bank account = new J01_bank();

        System.out.printf("%f TRY\n", account.getBalance());

        account.deposite(20);

        System.out.printf("%f TRY\n", account.getBalance());

        /*
        * This implementation hides the balance variable, enabling access to it only through the deposit method, which validates the amount to be deposited before modifying the variable.
        * */

//        In summary, encapsulation provides the following benefits:
//        - Control of the way data is accessed or modified
//        - More flexible and easily changed code
//        - Ability to change one part of the code without affecting other parts

    }
}
