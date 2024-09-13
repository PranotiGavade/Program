import java.util.*;

class Pattern4
{
    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            System.out.print(iCnt);
            System.out.print("\t");
        }
        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            
            System.out.print("\t*\t");
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