import java.util.*;

class Hashmap6
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

        Set <String>setobj = hobj.keySet();

        int iMax = 0;
        String temp = null;

        for(String A : setobj)
        {
            if(hobj.containsKey(A))
            {
                if(hobj.get(A) > iMax)
                {
                    iMax = hobj.get(A);
                    temp = A;
                }
            }
        }

        System.out.println(temp+ " ocuurs maxmimum no of times ie " +iMax);
    }
}