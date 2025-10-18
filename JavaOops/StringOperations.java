import java.util.Scanner;

public class StringOperations {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String str = sc.nextLine();

        // Count characters
        int length = str.length();
        System.out.println("Number of characters: " + length);

        // Reverse the string
        String reversedStr = new StringBuilder(str).reverse().toString();
        System.out.println("Reversed string: " + reversedStr);

        // Check palindrome
        if (str.equals(reversedStr)) {
            System.out.println("The string is a palindrome.");
        } else {
            System.out.println("The string is not a palindrome.");
        }

        sc.close();
    }
}
