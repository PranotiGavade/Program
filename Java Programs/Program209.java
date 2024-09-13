import java.util.*;

class Program209
{
    public static int SumEvenDigits(int iNo)
    {
        int iDigit = 0, iSum = 0;
        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iSum = iSum + iDigit;
            }
            iNo = iNo / 10;
        }
        return iSum;
    }
    
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;
        
        System.out.println("enter number :");
        iValue = sobj.nextInt();

        iRet = SumEvenDigits(iValue);

        System.out.println("Number of Digits are :"+iRet);

    }
}