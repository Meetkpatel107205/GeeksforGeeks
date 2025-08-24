
package Java;

public class Data_Types_Java {

    // Function to do operations with different data types
    static void dataTypes(int a, float b, double c, long l, byte d) {

        double p = c / b;  // c/b
        double q = b / a;  // b/a
        double r = c / a;  // c/a
        double m = r + l;  // r+l
        int s = a / d;     // a/d

        // Printing all the results
        System.out.println(p + " " + q + " " + r + " " + m + " " + s);
    }

    public static void main(String[] args) {
        // Example call to test the function
        int a = 5;
        float b = 2.0f;
        double c = 20.0;
        long l = 10L;
        byte d = 2;

        dataTypes(a, b, c, l, d);
    }
}
