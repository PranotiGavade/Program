import java.util.*;

class Array15
{
    public static int MaxiMum(int Arr[])
    {
        int iMax = 0, i = 0;

        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i] > iMax)
            {
                iMax = Arr[i];
            }
        }
        return iMax;
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

        int iRet = MaxiMum(Arr);

        System.out.println("Maximum number is :"+iRet);
    }
}