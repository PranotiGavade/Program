import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int No)
    {
        Arr = new int[No];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements :");
        int i = 0;
        for(i = 0; i<Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements :");
        int i = 0;
        for(i = 0; i<Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }

    public int Addition()
    {
        int i = 0;
        int iSum = 0;

        for(i = 0; i<Arr.length; i++)
        {
            iSum = iSum + Arr[i];
        }
        return iSum;
    }
}
class SumArray
{
    public static void main(String A[])
    {
        int iNo = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements that you want to store :");
        iNo = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo);

        aobj.Accept();
        aobj.Display();

        iRet = aobj.Addition();

        System.out.println("Addition is :"+iRet);

    }
}