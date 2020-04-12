package java018;

/**
 * created by cicek on 29.01.2019 20:19
 */

class Ani123 {
    String name;

    Ani123(String name) {
        this.name = name;
    }

    @Override
    public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + ((name == null) ? 0 : name.hashCode());
        return result;
    }

    @Override
    public boolean equals(Object obj) {

        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        Ani123 other = (Ani123) obj;
        if (name == null) {
            if (other.name != null)
                return false;
        } else if (!name.equals(other.name))
            return false;
        return true;
    }
}
// Understand one thing: equal is used to compare data inside memory locations...

class A {

    private int x;

    public boolean equals(Object o) {
        return  ((A)o).x == this.x;
    }

    public static void main(String[] args)  {
        A a = new A();
        a.x = 9;
        A b = new A ();
        b.x = 5;
        System.out.println(a.equals(b)); // false
    }
}
