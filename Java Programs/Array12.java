import java.util.*;

class Array12
{
    public static int Divisible(int [] Arr, int iSize)
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 0; iCnt<=iSize; iCnt++)
        {
            if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 3 == 0))
            {
                iCount++;
            }
        }
        return iCount;
    }
    public static void main(String Arg[])
    {
        int i = 0, iRet = 0, ilength = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elementsthat you want to enter :");

        ilength = sobj.nextInt();

        int [] Arr = new int[ilength];

        System.out.println("Enter elements :");
        for(i = 0; i<=ilength; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        iRet = Divisible(Arr,Arr.length);

        System.out.println("Number of elements which are divisible by 3 and 5 are :"+iRet);
    }
}