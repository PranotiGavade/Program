import java.io.*;

class Buffered
{
    public static void main (String Arg[])
    {
        try
        {
            BufferedReader obj = new BufferedReader(new InputStreamReader(System.in));

            System.out.println("Enter your name :");
            String name = bobj.readLine();

            System.out.println("Welcome "+name);

        }
        catch(IOException obj)
        {}
    }
}