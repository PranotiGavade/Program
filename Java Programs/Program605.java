//problems on string advance
import java.util.*;

class Program605
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        str = str.reverse();

        System.out.println("Reverse string is :"+str);
    }
}