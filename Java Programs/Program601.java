//problems on string advance
import java.util.*;

class Program601
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s"," ");

        String Arr[] = str.split(" ");

        int i = 0;
        int iMax = 0;
        String iMaxStr = null;

       for(i = 0; i<Arr.length; i++)
       {
            if(Arr[i].length() > iMax)
            {
                iMax = Arr[i].length();
                iMaxStr = Arr[i];
            }
       }

        System.out.println("Largest length of word is :"+iMax);
       System.out.println("Largest word is :"+Arr[iMaxStr]);
    }
}