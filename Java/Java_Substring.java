
package Java;

public class Java_Substring
{
    static String javaSub(String S, int L, int R) {
        return S.substring(L, R + 1);
    }
    public static void main(String[] args) {
        // Example string
        String str = "HelloWorld";

        // Call the javaSub method from Solution class
        String result = javaSub(str, 2, 5);

        // Print the result
        System.out.println("Substring: " + result); // Output will be "lloW"
    }
}