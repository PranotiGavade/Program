import java.util.Scanner;
class Jagged
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of rows :");
        int rows = sobj.nextInt();

        int[][] arr = new int[rows][];

        for(int i =0; i<rows;i++)
        {
            System.out.println("Enter size pf row"+(i+1)+":");
            int row = sobj.nextInt();
            arr[i] = new int[row];
        }
        System.out.println("Jagged array\n");
    }
}