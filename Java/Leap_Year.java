
package Java;
import java.util.*;

public class Leap_Year {

    // Method to check leap year
    public static void solve() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a year: ");
        int year = sc.nextInt();
        
        // Leap year condition
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            System.out.println("True");  // It is a leap year
        } else {
            System.out.println("False"); // Not a leap year
        }

        sc.close();
    }

    // Main method
    public static void main(String[] args) {
        solve();  // Call the solve method
    }
}