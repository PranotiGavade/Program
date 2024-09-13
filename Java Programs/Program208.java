import java.util.*;

class Program208
{
    public static int CountDigits(int iNo)
    {
        int iCnt = 0;
        while(iNo > 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;
    }
    
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;
        
        System.out.println("enter number :");
        iValue = sobj.nextInt();

        iRet = CountDigits(iValue);

        System.out.println("Number of Digits are :"+iRet);

    }
}