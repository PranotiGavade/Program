//probles on string advance

import java.util.*;

class Program595
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        int i = 0;

        System.out.println("Words from string are :");
        for(String s : Arr)
        {
            System.out.println(s);
        }
    }
}