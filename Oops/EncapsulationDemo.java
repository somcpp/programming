// Encapsulation in Java
// Encapsulation is the concept of wrapping data (variables) and code (methods) together as a single unit.
// It is achieved by making fields private and providing public getter/setter methods.

class Student {
    private String name;
    private int age;

    // Getter for name
    public String getName() {
        return name;
    }

    // Setter for name
    public void setName(String name) {
        this.name = name;
    }

    // Getter for age
    public int getAge() {
        return age;
    }

    // Setter for age
    public void setAge(int age) {
        this.age = age;
    }

    public void display() {
        System.out.println("Student: " + name + ", Age: " + age);
    }

    public static void main(String[] args) {
        Student s = new Student();
        s.setName("Bob");
        s.setAge(20);
        s.display();
    }
}
// Save as EncapsulationDemo.java and run with:
// javac EncapsulationDemo.java
// java Student
