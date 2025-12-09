import java.util.*;
class MyTask implements Runnable {
    public void run() {
        System.out.println("Task is running");
    }
}

class main {
    public static void main(String[] args) {
        Runnable r = new MyTask();
        Thread t = new Thread(r);
        t.start();
        
    }
}
