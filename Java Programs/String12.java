import java.util.*;

class String12
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        System.out.println("Enter word :");
        String word = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+"," ");

        String Arr[] = str.split(" ");

        int iCnt = 0;
        for(String s : Arr)
        {
            if(word.equals(s))
            {
                iCnt++;
            }
        }

        System.out.println("Frequency of that word is:"+iCnt);
    }
}