import java.util.*;

class Digit11
{
    public static int CountSum(int iNo)
    {
        int iSum = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        return iSum;
    }
    public static void main(String Arg[])
    {
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        iRet = CountSum(iValue);

        System.out.println("Summation of digits are :"+iRet);
        
    }
}