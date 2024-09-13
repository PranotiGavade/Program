import java.util.*;

class Digit4
{
    public static void DisplayDigit(int iNo)
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
            if(iDigit % 2 == 0)
            {
                System.out.println(iDigit);
            }
        }
    }

    public static void main(String Arg[])
    {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        iValue = sobj.nextInt();

        DisplayDigit(iValue);

    }
}