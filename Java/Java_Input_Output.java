
package Java;
import java.util.Scanner;

public class Java_Input_Output {

    // Static method to print a string and an integer
    static void printIntString(String S, int N) {
        // Print the string
        System.out.println("The input string: " + S);
        // Print the integer
        System.out.println("The input integer: " + N);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Ask the user to input a string
        System.out.print("Enter a string: ");
        String inputString = sc.nextLine();  // Read the whole line as a string

        // Ask the user to input an integer
        System.out.print("Enter an integer: ");
        int inputInt = sc.nextInt();  // Read an integer from user

        // Call the static method with the inputs
        printIntString(inputString, inputInt);

        sc.close(); // Close the scanner to free resources
    }
}
