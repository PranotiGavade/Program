import java.util.*;

class String19
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
        StringBuffer finalstr = new StringBuffer("");

       int i = 0;

       for(String s:Arr)
       {
            temp = new StringBuffer(s);
            temp = temp.reverse();

            finalstr.append(temp);
            finalstr.append(" ");
       }

       System.out.println(finalstr);
    }
}