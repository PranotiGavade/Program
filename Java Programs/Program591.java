//probles on string advance

import java.util.*;

class Program591
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        System.out.println("String after replacement :"+str);

        str = str.replaceAll("a","z");

        System.out.println("String after replacement :"+str);
    }
}