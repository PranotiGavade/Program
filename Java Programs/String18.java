import java.util.*;

class String18
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        StringBuilder sb = new StringBuilder(str);

        sb = sb.reverse();

        System.out.println("Reverse string is :"+sb);
    }
}