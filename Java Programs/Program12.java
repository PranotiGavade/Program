import java.util.*;

class Program12
{
    public static int DisplyResult(int iMarks)
    {
        if((iMarks < 0) || (iMarks > 100))
        {
            System.out.println("Invalid input");   //filter
        }
        if((iMarks <= 35) && (iMarks >= 0))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    public static void main(String arg[])
    {
        int iValue = 0;
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter percentage :");
        iValue = sobj.nextInt();

        iRet = DisplyResult(iValue);

        if(iRet == 1)
        {
            System.out.println("student is pass in eexam");

        }
        else
        {
            System.out.println("Student is fail in exam");
        }
    }
}