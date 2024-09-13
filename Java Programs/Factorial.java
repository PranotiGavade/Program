import java.util.*;

class Factorial
{
    public static int Factorial(int iNo)
    {
        int iCnt = 0;
        int iFact = 1;

        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }
    public static void main(String Arg[])
    {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        iRet = Factorial(iValue);

        System.out.println("Factorial is :"+iRet);
    }
}