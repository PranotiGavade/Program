import java.util.*;

class ArrayX
{
    public int iSize;
    public int []Arr;

        public ArrayX(int No)
        {
            iSize = No;
            Arr = new int[iSize];
        }

        public void Accept()
        {
            Scanner sobj = new Scanner(System.in);
            int i = 0;

            System.out.println("Enter the elements");
            for(i = 0; i<iSize; i++)
            {
                Arr[i] = sobj.nextInt();
            }
        }

        public void Display()
        {
            int i = 0;

            System.out.println("Entered elements are :");
            for(i = 0; i<iSize; i++)
            {
                System.out.println(Arr[i]);
            }
        }

        public int Maximum()
        {
            int i = 0;
            int iMax = Arr[0];

            for(i = 0; i<iSize; i++)
            {
                if(Arr[i] > iMax)
                {
                    iMax = Arr[i];
                }
            }

            return iMax;
        }
}

class Arr3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements that you want to store :");
        int iNo = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo);

        aobj.Accept();
        aobj.Display();

        int iRet = aobj.Maximum();
        System.out.println("Maximum number is:"+iRet);
    }
}