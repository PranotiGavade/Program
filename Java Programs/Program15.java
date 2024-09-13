import java.util.*;

class Program15
{
    public static boolean DisplayFactors(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt<iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String Arg[])
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        bRet = CheckPerfect(iValue);

        if((bRet) = true)
        {
            System.out.println("Number is perfect",+iValue);
        }
        else
        {
            System.out.println("Number is not perfect",+iValue);
        }

    }
}