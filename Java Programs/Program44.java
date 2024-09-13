import java.util.*;

class ArrayX
{
    public int arr[];

    public ArrayX(int iNo)
    {
        arr = new int[iNo];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements :");
        
        int i = 0;
        for(i = 0; i<arr.length; i++)
        {
            arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Entered elements are :");

        int i = 0;
        for(i = 0; i<arr.length; i++)
        {
            System.out.println(arr[i]);
        }
    }

    public  float Average()
    {
        int iSum = 0, i = 0;
        float fAns = 0;

        for(i = 0; i<arr.length; i++)
        {
            iSum = iSum + arr[i];
        }
        fAns = (float)iSum / (float)arr.length;
        return fAns;
    }
}
class Program44
{
    public static void main(String Arg[])
    {
        float fRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements that you want to store :");
        int iNo = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo);

        aobj.Accept();

        aobj.Display();

        fRet = aobj.Average();

        System.out.println("Average is "+fRet);

    }
}