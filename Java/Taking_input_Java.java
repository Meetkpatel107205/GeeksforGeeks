
package Java;

import java.util.Scanner;

public class Taking_Input_Java
{
    public static void main(String args[]) {
        // Implement Scanner Class
        Scanner sc = new Scanner(System.in);
        
        // Take all inputs
        int intVal = sc.nextInt();
        float floatVal = sc.nextFloat();
        long longVal = sc.nextLong();
        byte byteVal = sc.nextByte();
        sc.nextLine();
        String stringVal = sc.nextLine();
        
        // Print all the values
        System.out.println(intVal);
        System.out.println(floatVal);
        System.out.println(longVal);
        System.out.println(byteVal);
        System.out.println(stringVal);
    }   
}
