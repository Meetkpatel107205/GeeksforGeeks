
package Java;

import java.util.Scanner;

public class Print_Square_Wall_Using_Nested_Loops {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the size of the square wall: ");
        int n = sc.nextInt();
        
        // Outer loop for rows
        for (int i = 0; i < n; i++) {
            // Inner loop for columns
            for (int j = 0; j < n; j++) {
                System.out.print("*");
            }
            System.out.println(); // Move to next row

            sc.close();
        }
    }    
}
