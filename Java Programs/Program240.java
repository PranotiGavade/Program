import java.util.*;

class ArrayX
{
    public int Arr[];
    
    public ArrayX(int No)
    {
        Arr = new int[No];
    }
}

class Program240
{
    public static void main(String Arg[])
    {
        ArrayX aobj = new ArrayX(5);

        System.out.println("array size is :"+aobj.Arr.length);
    }
}