import java.util.*;

class Digit10
{
    public static int Reverse(int iNo)
    {
        int iDigit = 0;
        int iRev = 0;
        int iSum = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 + iDigit;
            iNo = iNo / 10;
        }
        return iRev;
    }
    public static void main(String Arg[])
    {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        iRet = Reverse(iValue);

        System.out.println("Reverse number is :"+iRet);
    }
}