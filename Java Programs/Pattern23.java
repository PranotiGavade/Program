import java.util.*;

class Pattern23
{
    public static void Display()
    {
        int i = 0;
        int j = 0;

        for(i = 1; i <= 3 ; i++)
        {
            for(j = 1; j<=4; j++)
            {
                System.out.print("*\t");
            }
            System.out.print("\n");
        }
        
    }
    public static void main(String Arg[])
    {
        //int iValue = 0;

        //Scanner sobj = new Scanner(System.in);

        //System.out.println("Enter number :");
        //iValue = sobj.nextInt();

        Display();
    }
}