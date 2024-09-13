import java.util.*;

class Digit12
{
    public static int SumDifference(int iNo)
    {
        int iSumDiff = 0;
        int iSumE = 0;
        int iSumO= 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iSumE = iSumE + iDigit;
            }
            else
            {
                iSumO = iSumO + iDigit;
            }
            iNo = iNo / 10;
        }
        iSumDiff = iSumE - iSumO;
        return iSumDiff;
    }
    public static void main(String Arg[])
    {
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iValue = sobj.nextInt();

        iRet = SumDifference(iValue);

        System.out.println("Difference is :"+iRet);
        
    }
}