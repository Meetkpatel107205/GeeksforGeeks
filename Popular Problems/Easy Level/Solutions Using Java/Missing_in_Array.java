import java.util.Scanner;

public class Missing_in_Array {

    public static int missingNum(int[] arr)
    {
        int range = arr.length + 1;

        long actualSum = (1L * range * (range + 1))/2;

        long arrSum = 0;

        for(int i = 0; i < arr.length; i++)
        {
            arrSum += arr[i];
        }

        long ans = actualSum - arrSum;

        return (int)ans;
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

        int result = missingNum(arr);

        System.out.println("\nMissing Number in Array : " + result);

        sc.close();
    }
}
