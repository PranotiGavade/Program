import java.util.*;

class Array11
{
    public static int Divisible(int[] Arr,int iSize)
    {
        int i = 0;
        int iCount = 0;

        System.out.print("Odd Elements are :");
        for(i = 0; i<iSize;  i++)
        {
            if(Arr[i] % 5 == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }
    public static void main(String Arg[])
    {
        int iRet = 0,i = 0;
        int ilength = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements that you want to Allocate :");
        ilength = sobj.nextInt();

        int[] Arr = new int[ilength];

        System.out.println("Enter number :");
        for(i = 0; i<ilength; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        iRet = Divisible(Arr,Arr.length);

        System.out.println("Numbers which are divisible by 5 are :"+iRet);
    }
}