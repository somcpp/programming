// abstract class Animal {
//     // abstract void walk();
// }
// class Horse extends Animal {
//     public void walk() {
//         System.out.println("walks on 4 legs");
//     }
// }

interface Animal {
    int eyes = 2;
    void walk();
}
interface Herbivore {

}

class Horse implements Animal , Herbivore {
    public void walk() {
        System.out.println("walks on 4 legs");
    }
}

public class OOPS{
    public static void main(String[] args) {
        Horse horse = new Horse();
        horse.walk();
    }
}
