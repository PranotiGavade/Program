import java.util.*;

class Hashmap5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+"," ");

        String Arr[] = str.split(" ");

        HashMap <String,Integer>hobj = new HashMap<String, Integer>();

        int Frequency = 0;

        for(String s: Arr)
        {
            if(hobj.containsKey(s))
            {
                Frequency = hobj.get(s);
                hobj.put(s,Frequency+1);
            }
            else
            {
                hobj.put(s,1);
            }
        }

        Set <String> setobj = hobj.keySet();

        for(String A : setobj)
        {
            System.out.println(A+ " ocuurs" + hobj.get(A)+ " times");
        }
    }
}