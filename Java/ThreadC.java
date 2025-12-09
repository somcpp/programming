class MyThread extends Thread {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println("Child thread: " + i);
            try {
                Thread.sleep(500); // slow down so we can see order
            } catch (InterruptedException e) {}
        }
    }
}
 class ThreadC {
    public static void main(String[] args) {
        MyThread t = new MyThread();
        t.start();   // start child thread

        try {
            t.join();  // main will wait until t finishes
        } catch (InterruptedException e) {}

        System.out.println("Main thread ends after child thread finishes.");
    }
}
