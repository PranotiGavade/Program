import java.util.*;

class Program17
{
    public static boolean CheckPrime(int iNo)
    {
        int iCnt = 0;
    
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 2; iCnt<=iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                break;
            }
        }
        if(iCnt > (iNo / 2))
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
        iValue = nextInt();

        bRet = CheckPrime(cValue);

        if(bRet == true)
        {
            System.out.println("It is prime number",iValue);
        }
        else
        {
            System.out.println("It is not prime number",iValue);
        }
    }
}