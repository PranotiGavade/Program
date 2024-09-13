import java.util.*;

class ArrayX
{
    public int iSize;
    public int iValue;
    public int Arr[];

        public ArrayX(int iNo1,int iNo2)
        {
            iSize = iNo1;
            iValue = iNo2;
            Arr = new int[iSize];
        }

        public void Accept()
        {
            Scanner sobj = new Scanner(System.in);

            int i = 0;

            System.out.println("Enter the elements:");
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

        public boolean Check(int No)
        {
            int i = 0;
            boolean bFlag = false;

            for(i = 0; i<iSize; i++)
            {
                if(Arr[i] == No)
                {
                    bFlag = true;
                }
            }

            return bFlag;
        }
}
class Arr10
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements that you want to enter:");
        int No1 = sobj.nextInt();

        System.out.println("Enter number which you want to check");
        int No2 = sobj.nextInt();

        ArrayX aobj = new ArrayX(No1,No2);

        aobj.Accept();
        aobj.Display();

        boolean bRet = false;
        bRet = aobj.Check(No2);
        if(bRet == true)
        {
            System.out.println("Number is present");
        }
        else 
        {
            System.out.println("Number is not present");
        }
    }
}