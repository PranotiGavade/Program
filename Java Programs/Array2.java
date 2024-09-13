import java.util.*;

class Array2
{
    public static void Display(int[] Arr,int iSize)
    {
        int i = 0;
        for(i = 0; i<iSize;  i++)
        {
            System.out.println(Arr[i]);
        }
    }
    public static void main(String Arg[])
    {
        int Arr[] = {10,20,30,40,50};

        Display(Arr,Arr.length);
    }
}