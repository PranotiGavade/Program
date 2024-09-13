import java.util.Scanner;
class Exception
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        
        System.out.println("Enter number of elements :");
        int n = sobj.nextInt();
        int[] arr = new int[n]; 
        
        System.out.println("Enter elements :");
        for(int i = 0; i<n; i++)
        {
            arr[i] = sobj.nextInt();
        }
        int largest = arr[0];
            for(int i =1;i<n; i++)
            {
                if(arr[i]>largest)
                {
                    largest = arr[i];
                }
            }
        System.out.println("Largest number in array is :"+largest);      

    }
}