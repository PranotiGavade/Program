import java.util.*;

class Array14
{
    public static boolean CheckNumber(int Arr[],int iNo)
    {
        boolean bFlag = false;
        int i = 0;
        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i] == iNo)
            {
                bFlag = true;
                break;
            }
        }
        return bFlag;
    }
    public static void main(String Arg[])
    {
        int i = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements that you want to search :");
        int iSize = sobj.nextInt();
        
        int Arr[] = new int[iSize];

        System.out.println("Enter numbers :");
        for(i = 0; i<Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Enter number that you want to search :");
        int iValue = sobj.nextInt();

        bRet = CheckNumber(Arr,iValue);

        if(bRet == true)
        {
            System.out.println("Number is presnet in array");
        }
        else 
        {
            System.out.println("Number is not present in array");
        }
    }
}