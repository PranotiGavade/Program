import java.util.*;

class Array7
{
    public static int AdditionEven(int[] Arr,int iSize)
    {
        int i = 0;
        int iSum = 0;

        System.out.print("Odd Elements are :");
        for(i = 0; i<iSize;  i++)
        {
            if(Arr[i] % 2 == 0)
            {
                iSum = iSum + Arr[i];
            }
        }
        return iSum;
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

        iRet = AdditionEven(Arr,Arr.length);

        System.out.println("Summation of even elements are :"+iRet);
    }
}