import java.util.*;

class String3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        System.out.println("Entered string is :"+str);

        int iCnt = 0, i= 0;

        for(i = 0; i<str.length(); i++)
        {
            if(str.charAt(i) == ' ')
            {
                iCnt++;
            }
        }
        System.out.println("White spaces are :"+iCnt);
    }
}