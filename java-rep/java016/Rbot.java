package java016;

/**
 * created by cicek on 29.01.2019 17:28
 */

public class Rbot {
    int id;

    Rbot(int i){
        id = i;
        Brain b = new Brain();
        b.think();
    }

    private class Brain{
        public void think(){
            System.out.println(id + " is thinking");
        }
    }
    /*
    The class Robot has an inner class Brain. The inner class can access all of the member variables and methods of its outer class, but it cannot be accessed from any outside class.
     */
}

/*
class Animal {
  String name;
  Animal(String n) {
    name = n;
  }
}

class MyClass {
  public static void main(String[ ] args) {
    Animal a1 = new Animal("Robby");
    Animal a2 = new Animal("Robby");
    System.out.println(a1 == a2);
  }
}
//Outputs false

Despite having two objects with the same name, the equality testing returns false,
because we have two different objects (two different references or memory locations)

 */
