// import java.util.Arrays;
// import java.util.*;
// interface myFunc {
//     int add(int x, int y);
// }
// public class lambda {
//     public static void main(String[] args) {
//         myFunc f = (x,y) -> x + y;
//         System.out.println(f.add(5,7 ));

//         List<String> names = Arrays.asList("Saubhagya", "Sharma");
//         List<Integer> arr = new ArrayList<>();
//         arr.add(5);
//         System.out.println(names);
//     }
// }
interface Message {
    void print();
}

class Demo {
    public static void show() {
        System.out.println("Hello from static method!");
    }
}

 class Main {
    public static void main(String[] args) {

        Message m = () -> Demo.show();  // calling static method using lambda
        m.print();
    }
}
