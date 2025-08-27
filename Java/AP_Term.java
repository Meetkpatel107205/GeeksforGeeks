
package Java;

import java.util.Scanner;

class Solution {
    // Method to calculate nth term of A.P.
    public int apTerm(int a, int d, int n) {
        int ans = a + (n - 1) * d;
        return ans;
    }
}

public class AP_Term {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter first term (a): ");
        int a = sc.nextInt();
        
        System.out.print("Enter common difference (d): ");
        int d = sc.nextInt();
        
        System.out.print("Enter term number (n): ");
        int n = sc.nextInt();
        
        // Create Solution object
        Solution sol = new Solution();
        int nthTerm = sol.apTerm(a, d, n);
        
        System.out.println("The " + n + "th term of A.P. is: " + nthTerm);

        sc.close();
    }
}