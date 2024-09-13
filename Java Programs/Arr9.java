import java.util.*;

class ArrayX
{
    public int iSize;
    public int Arr[];

        public ArrayX(int No)
        {
            iSize = No;
            Arr = new int[iSize];
        }

        public void Accept()
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the elements :");

            int i = 0;
            for(i = 0; i<iSize; i++)
            {
                Arr[i] = sobj.nextInt();
            }
        }

        public void Display()
        {
            System.out.println("Entered elements are :");
            int i = 0;

            for(i = 0; i<iSize; i++)
            {
                System.out.println(Arr[i]);
            }
        }
}

class Arr9
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements that you want to enter :");
        int No = sobj.nextInt();

        ArrayX aobj = new ArrayX(No);

        aobj.Accept();
        aobj.Display();

    }
}