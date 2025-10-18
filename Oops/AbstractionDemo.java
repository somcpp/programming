// Abstraction in Java
// Abstraction is the concept of hiding complex implementation details and showing only the necessary features.
// It is achieved using abstract classes and interfaces.

abstract class Vehicle {
    abstract void start(); // Abstract method (no body)
    void fuel() {
        System.out.println("Vehicle needs fuel");
    }
}

class Car extends Vehicle {
    void start() {
        System.out.println("Car starts with a key");
    }
}

class AbstractionDemo {
    public static void main(String[] args) {
        Vehicle v = new Car();
        v.start(); // Car starts with a key
        v.fuel(); // Vehicle needs fuel
    }
}
// Save as AbstractionDemo.java and run with:
// javac AbstractionDemo.java
// java AbstractionDemo
