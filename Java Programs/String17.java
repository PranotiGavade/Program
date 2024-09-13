import java.util.*;

class String17
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter strimg :");
        String str = sobj.nextLine();

        System.out.println("enter word :");
        String word = sobj.nextLine();

        char ch = word.charAt(0);
        String Arr[] = str.split(" ");

        int i = 0;
        int iCnt = 0;

        for(String s:Arr)
        {
            if(word.equals(s))
            {
                iCnt++;
            }
        }

        System.out.println("Frequency of word is :"+iCnt);
    }
}