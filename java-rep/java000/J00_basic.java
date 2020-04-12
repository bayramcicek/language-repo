package java000;

/**
 * created by cicek on 07.10.2018 18:12
 */
/** This is a documentation comment */

/*** This is also a
 documentation comment */

public class J00_basic {
    public static void main(String[] args){

        /*public static void main(String[] args)*/

        /*
- public:   anyone can access it
- static:   method can be run without creating an instance of the class containing the main method
- void:     method doesn't return any value
- main:     the name of the method
         */

        // For main, it's an array of strings called args

        // Java is case sensitive so 'main' is different from 'Main'

/*      Javadoc is a tool which comes with JDK and it is used for generating Java code documentation in
      HTML format from Java source code which has required documentation in a predefined format.

      When a documentation comment begins with more than two asterisks, Javadoc assumes that you want to create a "box"
      around the comment in the source code. It simply ignores the extra asterisks. */

        /**********************

         This is the start of a method

         ***********************/

        // one asterisk /* comment */ is used for commenting the code, for instance marking important parts of the code.
        // using two asterisks /** doc comment */ does the same but will additionally show up in files created by javadoc.
        // javadoc is a tool for automatically generated documentation files. those files basically show all the J00_Methods of a class ,
        // the arguments and their formats/types, and the return value format - AND all doc comments. normal comments do not show up in a javadoc file.

        // JRE = JVM(executes the byte code) + Java Packages Classes(like util, math, lang, awt,swing etc)+runtime libraries.
        // JDK = JRE + development tools, compiles java to Byte Code. Consists of debuggers, Compilers etc.
    }
}
