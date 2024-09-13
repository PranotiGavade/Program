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

        System.out.println("Enter the elements :");
        int i = 0;

        for(i = 0; i<Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Entered elements are :");
        int i = 0;

        for(i = 0; i<Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }

    public float Average()
    {
        int i = 0;
        int iSum = 0;
        float fAns = 0.0f;

        for(i = 0; i<Arr.length; i++)
        {
            iSum = iSum + Arr[i];
        }
        fAns = (iSum / Arr.length);
        return fAns;
    }
}

class Program242
{
    public static void main(String Arg[])
    {
        float fRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements you want to store :");
        int iNo = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo);

        System.out.println("array size is :"+aobj.Arr.length);

        aobj.Accept();
        aobj.Display();

        fRet = aobj.Average();

        System.out.println("Average is :"+fRet);
    }
}