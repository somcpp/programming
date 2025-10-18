// Polymorphism in Java
// Polymorphism means 'many forms'. It allows methods to do different things based on the object it is acting upon.
// Two types: Compile-time (method overloading) and Runtime (method overriding)

class Animal {
    void sound() {
        System.out.println("Animal makes a sound");
    }
}

class Cat extends Animal {
    void sound() {
        System.out.println("Cat meows");
    }
}

class Dog extends Animal {
    void sound() {
        System.out.println("Dog barks");
    }
}

class PolymorphismDemo {
    public static void main(String[] args) {
        Animal a;
        a = new Cat();
        a.sound(); // Cat meows
        a = new Dog();
        a.sound(); // Dog barks
    }
}
// Save as PolymorphismDemo.java and run with:
// javac PolymorphismDemo.java
// java PolymorphismDemo
