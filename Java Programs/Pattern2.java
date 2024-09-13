import java.util.*;

class Pattern2
{
    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            System.out.print(iCnt);
        }
    }
    public static void main(String Arg[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number :");
        iValue = sobj.nextInt();

        Display(iValue);
    }
}