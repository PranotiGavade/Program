import java.util.*;

class String6
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        int i = 0;

        System.out.println("Words from string are :");
        for(i = 0; i<Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}