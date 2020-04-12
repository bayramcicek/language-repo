package java009;

/**
 * created by cicek on 03.11.2018 23:01
 */

public class J_main {
    public static void main(String[] args){

        J_animal cat = new J_cat();
        J_animal dog = new J_dog();
        J_animal ani = new J_animal();

        cat.makeSound(); // Caaaat
        dog.makeSound(); // Dooooog!!! // Animalll
        ani.makeSound(); // Animallll

        J_cat caa = new J_cat();
        caa.makeSound(); // Caaaat

//        J_animal[] pet = new J_animal[2]; // int[] arr = new int[2];
//        pet[0] = new J_cat();
//        pet[1] = new J_dog();
//
//        for (int i=0; i<2; i++) {
//            pet[i].makeSound();
//        }





    }
}
