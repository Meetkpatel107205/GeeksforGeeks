import java.util.Scanner;

public class Second_Largest {

    public static int secondLargest(int[] arr)
    {
        int maxEle = Integer.MIN_VALUE;

        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] > maxEle)
            {
                maxEle = arr[i];
            }
        }

        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] == maxEle)
            {
                arr[i] = Integer.MIN_VALUE;
            }
        }

        maxEle = Integer.MIN_VALUE;

        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] > maxEle)
            {
                maxEle = arr[i];
            }
        }

        if(maxEle == Integer.MIN_VALUE)
        {
            maxEle = -1;
        }

        return maxEle;
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

        int result = secondLargest(arr);

        System.out.println("\nSecond Largest Element in Given Array : " + result);

        sc.close();
    }
}
