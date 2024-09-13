import java.util.*;

class Digit9
{
    public static int EvenSum(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 != 0)
            {
                iSum = iSum + iDigit;
            }
            iNo = iNo / 10;
        }
        return iSum;
    }
    public static void main(String Arg[])
    {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        iRet = EvenSum(iValue);

        System.out.println("Sum of even digits are :"+iRet);
    }
}