import java.util.*;

class ArrayX
{
    public int iSize;
    public int iValue;
    public int []Arr;

        public ArrayX(int No1,int No2)
        {
            iSize = No1;
            iValue = No2;
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

        public boolean search(int No)
        {
            int i = 0;
            boolean bFlag = false;

            for(i = 0; i<iSize; i++)
            {
                if(Arr[i] == No)
                {
                    bFlag = true;
                    break;
                }
            }

            return bFlag;
        }
}

class Arr4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements that you want to store :");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter number which you want to search :");
        int iNo2 = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo1,iNo2);

        aobj.Accept();
        aobj.Display();

        boolean bRet = false;
        bRet = aobj.search(iNo2);
        if(bRet == true)
        {
            System.out.println("Element is present");
        }
        else 
        {
            System.out.println("Elemet is not present");
        }
    }
}