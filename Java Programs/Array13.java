import java.util.*;

class Array13
{
    public static int Search(int Arr[], int iNo)
    {
        int iFrequency = 0, i = 0;

        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i] == iNo);
            {
                iFrequency++;
            }
        }
        return iFrequency;
    }
    public static void main(String Arg[])
    {
        int i = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements:");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter elements :");

        for(i = 0; i<Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Enter number that you want tp search :");
        int iValue = sobj.nextInt();

        iRet = Search(Arr,iValue);

        System.out.println("Frequency is :"+iRet);

    }
}