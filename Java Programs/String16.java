import java.util.*;

class String16
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter strimg :");
        String str = sobj.nextLine();

        System.out.println("enter charachter :");
        String word = sobj.nextLine();

        char ch = word.charAt(0);
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