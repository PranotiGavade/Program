import java.util.*;

class String28
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String word = sobj.nextLine();

        String Arr[] = str.split(" ");

        str = str.trim();
        str = str.replaceAll("\\s+"," ");

        int iCnt = 0;

        for(String s: Arr)
        {
            if(word.equals(s))
            {
                iCnt++;
            }
        }

        System.out.println("Frequency of word is :"+iCnt);
    }
}