import java.util.*;

class Array16
{
    public static int MiniMum(int Arr[])
    {
        int iMin = Arr[0];
        int i = 0;

        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i] < iMin)
            {
                iMin = Arr[i];
            }
        }
        return iMin;
    }
    public static void main(String Arg[])
    {
        int i = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements that you want to serch :");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter elemets :");
        for(i = 0; i<Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        int iRet = MiniMum(Arr);

        System.out.println("Minimum number is :"+iRet);
    }
}