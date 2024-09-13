import java.util.*;

class Digit7
{
    public static int DisplayDigit(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            if(iDigit > 5)
            {
                iCount++;
            }
        }
        return iCount;
    }

    public static void main(String Arg[])
    {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        iValue = sobj.nextInt();

        iRet = DisplayDigit(iValue);

        System.out.println("Number of digits greater than 5 are :"+iRet);
    }
}