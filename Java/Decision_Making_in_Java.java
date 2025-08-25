
package Java;
import java.util.Scanner;

public class Decision_Making_in_Java
{
    public static String compareNM(int n, int m) {
        // code here
        if(n == m)
        {
            return "equal";
        }
        else if(n < m)
        {
            return "lesser";
        }
        else
        {
            return "greater";
        }
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n,m;

        System.out.print("\nEnter First Number : ");
        n = sc.nextInt();

        System.out.print("Enter Second Number : ");
        m = sc.nextInt();

        System.out.println("Relation Between Number " + n + " and Number " + m + " is : " + compareNM(n, m));

        sc.close();
    }    
}
