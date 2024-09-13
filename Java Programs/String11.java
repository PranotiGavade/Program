import java.util.*;

class String11
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        System.out.println("Enter charachter :");
        String s = sobj.nextLine();

        char ch = s.charAt(0);

        char Arr[] = str.toCharArray();

        int i = 0;
        int iCnt = 0;

        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i] == ch)
            {
                iCnt++;
            }
        }

        System.out.println("Frequency of charachter is :"+iCnt);
    }
}