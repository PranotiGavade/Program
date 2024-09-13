//probles on string advance

import java.util.*;

class Program597
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s"," ");

        String Arr[] = str.split(" ");

        System.out.println("Words from string are :"+Arr.length);
    }
}