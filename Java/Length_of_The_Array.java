
package Java;
import java.util.*;

class Solution {
    public static int arrayLength(int[] arr) {
        // Return the length of the array
        return arr.length;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the number of elements in the array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        
        int length = arrayLength(arr);
        System.out.println("Length of the array: " + length);

        sc.close();
    }
}