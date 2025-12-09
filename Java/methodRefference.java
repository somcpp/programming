interface Message {
    void print();
}

class Demo {
    public static void show() {
        System.out.println("Hello from static method!");
    }
}

class helo {
    public static void main(String[] args) {

        Message m = Demo::show;  // calling static method using lambda
        m.print();
    }
}
