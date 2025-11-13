package MultiThreading;

class MyTask implements Runnable {
    @Override
    public void run() {
        for(int i = 1; i <= 3; i++) {
            System.out.println("Task running: " + i);
        }
    }
}

class runnable {
    public static void main(String[] args) {
        Thread t = new Thread(new MyTask());
        t.start();

        System.out.println("Main thread continues...");
    }
}

