
package Java;

import java.util.Scanner;

public class Input_Floating_Number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter a float number: ");
        float f = sc.nextFloat(); // Take float input
        
        float result = f * 10.0f; // Multiply by 10
        System.out.println("Result: " + result);

        sc.close();
    }    
}