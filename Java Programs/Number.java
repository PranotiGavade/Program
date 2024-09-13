import java.util.*;

class Number
{
    public static int Sum(int Arr[])
    {
        int iSum = 0, i = 0;

        for(i = 0; i<Arr.length; i++)
        {
            iSum = iSum + Arr[i];
        }
        return iSum;
    }
    
    public static void main(String Arg[])
    {
        int iRet = 0, i = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements :");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter numbers :");
        for(i = 0; i<Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        iRet = Sum(Arr);

        System.out.println("summation is :"+iRet);
    }
}