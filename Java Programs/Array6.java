import java.util.*;

class Array6
{
    public static void OddDisplay(int[] Arr,int iSize)
    {
        int i = 0;

        System.out.print("Odd Elements are :");
        for(i = 0; i<iSize;  i++)
        {
            if(Arr[i] % 2 != 0)
            {
                System.out.println(Arr[i]);
            }
        }
    }
    public static void main(String Arg[])
    {
        int i = 0;
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

        OddDisplay(Arr,Arr.length);
    }
}