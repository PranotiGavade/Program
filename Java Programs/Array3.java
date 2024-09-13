import java.util.*;

class Array3
{
    public static int Display(int[] Arr,int iSize)
    {
        int i = 0;
        int iSum = 0;

        for(i = 0; i<iSize;  i++)
        {
            iSum = iSum + Arr[i];
        }
        return iSum;
    }
    public static void main(String Arg[])
    {
        int Arr[] = {10,20,30,40,50};
        int iRet = 0;

        iRet = Display(Arr,Arr.length);

        System.out.println("Addition is :"+iRet);

    }
}