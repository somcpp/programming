// Inheritance in Java
// Inheritance allows a class (child/subclass) to acquire properties and methods of another class (parent/superclass).

class Animal {
    void eat() {
        System.out.println("Animal is eating");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("Dog is barking");
    }

    public static void main(String[] args) {
        Dog d = new Dog();
        d.eat(); // Inherited method
        d.bark(); // Own method
    }
}
// Save as InheritanceDemo.java and run with:
// javac InheritanceDemo.java
// java Dog
