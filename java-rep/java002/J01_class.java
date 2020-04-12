package java002;

/**
 * created by cicek on 19.10.2018 15:35
 */

public class J01_class {
    public static void main(String[] args){

        /*
        * public is an access modifier, meaning that it is used to set the level of access.
        * You can use access modifiers for classes, attributes, and methods.
        *
        * */

        /*
        * The following choices are available for attributes and methods:
        *
            default:   A variable or method declared with no access control modifier is available to any other class in the same package.

            public:    Accessible from any other class.

            protected: Provides the same access as the default access modifier, with the addition that
                       subclasses can access protected methods and variables of the superclass (Subclasses and superclasses are covered in upcoming lessons).

            private:   Accessible only within the declared class itself.
        */

//        Modifier    | Class | Package | Subclass | World
//
//        public      |  Y    |    Y    |    Y     |   Y
//
//        protected   |  Y    |    Y    |    Y     |   N
//
//        no modifier |  Y    |    Y    |    N     |   N (package-private)
//
//        private     |  Y    |    N    |    N     |   N

//        Getters and Setters are used to effectively protect your data, particularly when creating classes.
//        For each variable, the get method returns its value, while the set method sets the value.


        /*
        *   Getters start with get, followed by the variable name, with the first letter of the variable name capitalized.
            Setters start with set, followed by the variable name, with the first letter of the variable name capitalized.*/

        J02_class v1 = new J02_class();
        System.out.printf("%s\n", v1.getColor() ); // red

        v1.setColor("white");
        System.out.printf("%s\n", v1.getColor() ); // white

        J02_class v2 = new J02_class("green");
        System.out.printf("%s\n", v2.getColor() ); // green

        /*
        Java automatically provides a default constructor, so all classes have a constructor, whether one is specifically defined or not.
         */

    }
}
