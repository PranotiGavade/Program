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
            int i = 0;

           System.out.println("Enter the elements :");
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

        public int AddEven()
        {
            int i = 0;
            int iSum = 0;

            for(i = 0; i<iSize; i++)
            {
                if(Arr[i] % 2 == 0)
                {
                    iSum = iSum + Arr[i];
                }
            }

            return iSum;
        }
}

class Arr1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of element that you want to store:");
        int iNo = sobj.nextInt();
        
        ArrayX aobj = new ArrayX(iNo);

        aobj.Accept();
        aobj.Display();

        int iRet = 0;

        iRet = aobj.AddEven();
        System.out.println("Addition of even elements are :"+iRet);
    }
}