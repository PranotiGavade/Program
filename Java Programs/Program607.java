//problems on string advance
import java.util.*;

class Program607
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+"," ");

        String Arr[] = str.split(" ");

        StringBuffer temp = null;
        StringBuffer finalstr = null;

        for(String s : Arr)
        {
            temp = new StringBuffer(s);
            temp = temp.reverse();

            System.out.print(temp);
        }
    }
}