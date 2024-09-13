import java.util.*;

class Pattern19
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';

        for(iCnt = 1,ch = 'A'; iCnt <= iNo ; iCnt++,ch++)
        {
            System.out.print(ch);
            System.out.print("\t");
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