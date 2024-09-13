import java.util.*;

class Program676
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        System.out.println(str);

        String Arr[] = str.split(" ");

        HashMap <String,Integer> hobj = new HashMap<String,Integer>();

        int Frequency = 0;

        for(String A : Arr)
        {
            if(hobj.containsKey(A))     //string is already present
            {
                Frequency = hobj.get(A);
                hobj.put(A,Frequency+1);
            }
            else        //string occurs first time
            {
                hobj.put(A,1);
            }
        }

        Set <String> setobj = hobj.keySet();
    }
}