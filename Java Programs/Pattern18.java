import java.util.*;

class Pattern18
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = 'A';

        for(iCnt = 1; iCnt <= iNo ; iCnt++)
        {
            System.out.print(ch);
            System.out.print("\t");
            ch++;
        }
        
    }
    public static void main(String Arg[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        Display(iValue);
    }
}