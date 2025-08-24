
package Java;
import java.util.Scanner;

public class Reverse_a_String {

    // Method to reverse string
    static String revStr(String s) {
        int strLen = s.length();
        String result = "";
        
        // iterate from last character to first
        for (int i = strLen - 1; i >= 0; i--) {
            result += s.charAt(i);  // use charAt instead of []
        }
        
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // take input from user
        System.out.print("Enter a string: ");
        String input = sc.nextLine();

        // reverse string
        String reversed = revStr(input);

        // print result
        System.out.println("Reversed string: " + reversed);

        sc.close();
    }
}