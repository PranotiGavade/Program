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
        System.out.println("Entered elements are :");
        
        int i = 0;
        for(i = 0; i<Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }

    public void DisplayEven()
    {
        int i = 0;

        for(i =  0; i<Arr.length; i++)
        {
            if((Arr[i] % 2) == 0)
            {
                System.out.println(Arr[i]);
            }
        }
    }

}
class EvenDisplay
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
        aobj.DisplayEven();

    }
}