import java.util.*;

class Program209
{
    public static int SumDifference(int iNo)
    {
        int iDigit = 0, iSum = 0, iOdd = 0, iEven = 0;
        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 = 0)
            {
                iEven = iEven + iDigit;
            }
            else
            {
                iOdd = iOdd + iDgit;
            }
        }
        return iEven - iOdd;
    }
    
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;
        
        System.out.println("enter number :");
        iValue = sobj.nextInt();

        iRet = SumDifference(iValue);

        System.out.println("Summation of odd digits are :"+iRet);

    }
}