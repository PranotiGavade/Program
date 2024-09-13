import java.util.*;

class Program13
{
    public static void DisplayFactors(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
    public static void main(String Arg[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        DisplayFactors(iValue);

    }
}