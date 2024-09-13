import java.util.*;

class Program205
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iCnt = 0, iSum = 0;

        System.out.println("enter number :");
        iValue = sobj.nextInt();

        for(iCnt = 0; iCnt<= iValue; iCnt++)
        {
            if(iValue % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        System.out.println("Summation of factors is :"+iSum);

    }
}