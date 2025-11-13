package MultiThreading;
class MyThread extends Thread{
    @Override
    public void run(){
        System.out.println("Running in: " + Thread.currentThread().getName());
    }
}
class threadClass {
    public static void main(String[] args){
        MyThread t = new MyThread();
        t.start();

        System.out.println("Running in: " + Thread.currentThread().getName());
    }
}
