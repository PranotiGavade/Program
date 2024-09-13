import java.util.Scanner;
class Exception7
{
    public static void main(String Arg[])
    {
        try
        {
            System.out.println("Inside try block");
            Scanner sobj = new Scanner(System.in);
            int Arr[] = {10,20,30,40,50};

            System.out.println("Enter index number\n");
            int i = sobj.nextInt();
            System.out.println(Arr[i]);
        }
        catch(ArrayIndexOutOfBoundsException obj)
        {
            System.out.println("Inside catch block\n");
        }
        finally
        {
            System.out.println("Inside finally block\n");
        }
        System.out.println("End of code");
    }
}