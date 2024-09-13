import java.util.*;

class Program199
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;
        int iAns = 0;

        System.out.println("Enter first number :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second number :");
        iValue2 = sobj.nextInt();

        iAns = iValue1 + iValue2;

        System.out.println("Addition is :"+iAns);
    }
}

//int       nextInt()
//float     nextFlaot()
//double    nextDouble()
//string    nextLine()