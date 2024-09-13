import java.util.*;

class ArrayX
{
    public int Arr;

    public ArrayX(int No)
    {
        Arr = new int[No];
    }

   
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("enter elements :");
        int i = 0;
        for(i = 0; i<Arr.length; i++)
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

    public void DisplayOdd()
    {
        int i = 0;
        for(i = 0; i<Arr.length; i++)
        {
            if((Arr[i] % 2) != 0)
            {
                System.out.println(Arr[i]);
            }
        }
    }
}
class OddDisplay
{
    public static void main(String A[])
    {
        int iNo = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements that you wnt to enter :");
        iNo = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo);

        aobj.Accept();
        aobj.Display();
        aobj.DisplayOdd();
    }
}