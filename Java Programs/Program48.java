import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iNo)
    {
        Arr = new int[iNo];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        
        int i = 0;
        System.out.println("Enter numbers :");
        for(i = 0; i<Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
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
        fAns = (float)iSum / (float)Arr.length;
        return fAns;
    }
}

class Program48
{
    public static void main(String Arg[])
    {
        
        float fRet = 0.0f;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter no of elements that you want to store :");
        int No = sobj.nextInt();

        ArrayX aobj =  new ArrayX(No);

        aobj.Accept();

        fRet = aobj.Average();

        System.out.println("Average is :"+fRet);

    }
}