import java.io.*;
class Input
{
    public static void main(String Arg[])
    {
        try
        {
            BufferedReader bobj = new BufferedReader( new InputStreamReader(System.in));

            System.out.println("Enter word :");
            String word = bobj.readLine();
            

            int length = word.length();
            System.out.println("Length of word "+word+"\" is :"+length);
        }
        catch(IOException obj)
        {}
        
    }
}