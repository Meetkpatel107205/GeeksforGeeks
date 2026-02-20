import java.util.Scanner;

public class Move_All_Zeroes_to_End {

    public static void pushZerosToEnd(int[] arr) {
        // code here
        int pos = 0;
        
        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] != 0)
            {
                arr[pos++] = arr[i];
            }
        }
        
        int noOfZero = arr.length - pos;

        for(int i = 0; i < noOfZero; i++)
        {
            arr[pos++] = 0;
        }

        System.out.print("\nOutput arr = [ ");

        for(int i = 0; i < arr.length; i++)
        {
            if(i == arr.length - 1)
            {
                System.out.print(arr[i]);
            }
            else
            {
                System.out.print(arr[i] + ", ");
            }
        }

        System.out.println(" ]");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("\nEnter Size of Array : ");
        int size = sc.nextInt();

        int[] arr = new int[size];

        System.out.println("\n---: Enter Array Element's :---\n");

        for(int i = 0; i < size; i++)
        {
            System.out.print("Enter Value for arr[" + (i + 1) + "] : ");
            arr[i] = sc.nextInt();
        }

        System.out.print("\nInput arr = [ ");

        for(int i = 0; i < size; i++)
        {
            if(i == size - 1)
            {
                System.out.print(arr[i]);
            }
            else
            {
                System.out.print(arr[i] + ", ");
            }
        }

        System.out.println(" ]");

        pushZerosToEnd(arr);

        sc.close();
    }
}
