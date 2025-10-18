// Java OOPs Basics
// This file explains the basic concepts of Object-Oriented Programming (OOP) in Java.
// OOP is a programming paradigm based on the concept of 'objects', which can contain data and code.

// 1. Class: Blueprint for objects
// 2. Object: Instance of a class
// 3. Methods: Functions defined inside a class
// 4. Fields/Attributes: Variables inside a class
// 5. Constructor: Special method to initialize objects
// 6. Encapsulation: Wrapping data and code together
// 7. Inheritance: Acquiring properties from another class
// 8. Polymorphism: Many forms (method overloading/overriding)
// 9. Abstraction: Hiding complex implementation details

// Example: Basic class and object
class Person {
    // Fields (attributes)
    String name;
    int age;

    // Constructor
    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Method
    void sayHello() {
        System.out.println("Hello, my name is " + name + " and I am " + age + " years old.");
    }

    // Main method to run the example
    public static void main(String[] args) {
        Person p1 = new Person("Alice", 25); // Creating an object
        p1.sayHello(); // Calling a method
    }
}

// Save this file as OOPBasics.java and run it using:
// javac OOPBasics.java
// java Person
