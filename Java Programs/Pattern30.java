import java.util.*;

class Pattern30
{
    public static void Display(int iRow,int iCol)
    {
        int i = 0;
        int j = 0;

        if(i != j)
        {
            System.out.println("Number of rows and coloumns should be same");
        }

        for(i = 1; i <= iRow ; i++)
        {
            for(j = 1; j<=iCol; j++)
            {
                if(i == j)
                {
                    System.out.print("$\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.print("\n");
        }
        
    }
    public static void main(String Arg[])
    {
        int iValue1 = 0;
        int iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of coloumns :");
        iValue2 = sobj.nextInt();

        Display(iValue1,iValue2);
    }
}