import java.util.*;

class Pattern14
{
    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = -iNo; iCnt < 0 ; iCnt++)
        {
            System.out.print(iCnt);
            System.out.print("\t");
        }
        
    }
    public static void main(String Arg[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        Display(iValue);
    }
}