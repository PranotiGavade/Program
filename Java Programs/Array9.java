import java.util.*;

class Array9
{
    public static int CountEven(int[] Arr,int iSize)
    {
        int i = 0;
        int iCount = 0;

        System.out.print("Odd Elements are :");
        for(i = 0; i<iSize;  i++)
        {
            if(Arr[i] % 2 == 0)
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

        iRet = CountEven(Arr,Arr.length);

        System.out.println("Number of even elements are :"+iRet);
    }
}