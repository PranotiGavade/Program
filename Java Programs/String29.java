import java.util.*;

class String29
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        str = str.trim();
        str = str.replaceAll("\\s+"," ");

        StringBuffer temp = null;
        StringBuffer finalstr = null;

        for(String s : Arr)
        {
            temp = new StringBuffer(s);
            temp = temp.reverse();

            finalstr.append(temp);
            finalstr.append(" ");

        }
        System.out.println(temp);
    }
}