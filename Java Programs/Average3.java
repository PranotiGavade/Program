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
        System.out.println("enter the elements :");

        int i = 0;
        
        for(i =0; i<Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("entered elements are :");

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
        float fAns = 0;
        for(i = 0; i<Arr.length; i++)
        {
            iSum = iSum + Arr[i];
        }
        fAns = ((float)iSum / (float)Arr.length);
        return fAns;
    }   
    

}
class Average3
{
    public static void main(String A[])
    {
        float fRet = 0.0f;
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number elements that you want to store :");
        int iNo = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo);

        aobj.Accept();

        aobj.Display();

        fRet = aobj.Average();

        System.out.println("Average is :"+fRet);
    }
}