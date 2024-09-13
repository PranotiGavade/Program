import java.util.*;

class Generic
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        int iNo = sobj.nextInt();

        int iSum = 0;
        int iDigit = 0;

        while(iNo >= 10)
        {
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum +iDigit;
                iNo = iNo/10;
            }

            iNo = iSum;

            if(iSum >= 10)
            {
                iSum = 0;
            }
        }

        System.out.println("Generic root is :"+iSum);
    }
}