import java.util.Scanner;

class Exception5
{
    public static void main(String Arg[])
    {
        try
        {
        Scanner sobj = new Scanner(System.in);
        int Arr[] = {10,20,30,40,50};

        System.out.println("Enter index number :");
        int i = sobj.nextInt();

        System.out.println(Arr[i]);
        }
        catch(ArrayIndexOutOfBoundsException obj)
        {
            System.out.println("Inside catch block");
        }
        finally
        {
            System.out.println("Inside finally");
        }
        System.out.println("End of code");
        
    }
}