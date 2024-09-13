import java.util.*;

class length
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String name = sobj.nextLine();

        char Arr[] = name.toCharArray();

        int i = 0, iCnt = 0;
        char ch = 0;
        for(i = 0; i<Arr.length; i++)
        {
            ch = name.charAt(i);

            if((ch >= 'A') && (ch <= 'Z'))
            {
                iCnt++;
            }
        }

        System.out.println("Capital charachters are :"+iCnt);
    }
}