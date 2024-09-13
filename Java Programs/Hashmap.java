import java.util.*;

class Hashmap 
{
    public static void main(String Arh[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter string :");
        String str = sobj.nextLine();

        HashMap <Character,Integer> hobj = new HashMap<Character,Integer>();

        char Arr[] = str.toCharArray();

        int Frequency = 0;

        for(char ch : Arr)
        {
            if(hobj.containsKey(ch))
            {
                Frequency = hobj.get(ch);
                hobj.put(ch,Frequency+1);
            }
            else
            {
                hobj.put(ch,1);
            }
        }

        System.out.println(hobj);
    }
}