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
        for(i = 0; i<Arr.length;i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Entered elements are :");

        int i = 0;
        for(i = 0; i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }

    public void CountDigit()
    {
        int i = 0;
        int iNo = 0;
        int iCount = 0;

        for(i = 0; i<Arr.length; i++)
        {
            iNo = Arr[i];
            while(iNo != 0)
            {
                iCount++;
                iNo = iNo / 10;
            }
            System.out.println(iCount);
            iCount = 0;
        }
        
    }
}
class CountDigit2
{
    public static void main(String A[])
    {
        int iNo = 0;
       
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements that you want to store :");
        iNo = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo);

        aobj.Accept();
        aobj.Display();

        aobj.CountDigit();



    }
}