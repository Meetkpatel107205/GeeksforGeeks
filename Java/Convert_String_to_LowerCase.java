
package Java;

import java.util.Scanner;
import java.util.Locale;

public class Convert_String_to_LowerCase
{
    // Method - 1 :-
    // static String toLower(String s) {
    //     // code 
    //     StringBuilder str = new StringBuilder();
        
    //     for(int i = 0; i < s.length(); i++)
    //     {
    //         char ch = s.charAt(i);
            
    //         if(ch >= 'A' && ch <= 'Z')
    //         {
    //             str.append((char)(ch + 32)); // convert uppercase to lowercase
    //         }
    //         else
    //         {
    //             str.append(ch); // keep lowercase or other characters as is
    //         }
    //     }
        
    //     return str.toString();
    // }

    // Method - 2 :-
    static String toLower(String s) {
        // code         
        return s.toLowerCase();
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Any String : ");
        String str = sc.nextLine();

        System.out.println(toLower(str));
    }    
}
