
import java.util.*;

class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];

        public Matrix(int A, int B)
        {
            this.iRow = A;
            this.iCol = B;

            Arr = new int[iRow][iCol];
        }

        protected void finalize()
        {
            System.out.println("Garbage collector is collecting memory of an object");
            Arr = null;
        }

        public void Accept()
        {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Please enter the data :");

            int i = 0, j = 0;

            for(i= 0; i<iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    Arr[i][j] = sobj.nextInt();
                }
            }
        }

        public void Display()
        {
            System.out.println("Elements from the matrix :");

            int i = 0, j = 0;
            for(i= 0; i<iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    System.out.print(Arr[i][j]+"\t");
                }
                System.out.println();
            } 
        }

        public int Summation()
        {
            int iSum = 0;
            int i = 0, j = 0;
            for(i= 0; i<iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
            return iSum;
        }

        public int Maximum()
        {
            int iMax = 0;
            int i = 0, j = 0;

            iMax = Arr[0][0];   //Imp
            
            for(i= 0; i<iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    if(iMax < Arr[i][j])
                    {
                        iMax = Arr[i][j];
                    }
                }
            }
            return iMax;
        }

        public int Minimum()
        {
            int iMin = 0;
            int i = 0, j = 0;

            iMin = Arr[0][0];    //Imp
            
            for(i= 0; i<iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    if(iMin > Arr[i][j])
                    {
                        iMin = Arr[i][j];
                    }
                }
            }
      
            return iMin;
        }

        public void RowSum()
        {
            int i = 0, j = 0, iSum = 0;

            for(i= 0; i<iRow; i++)
            {
                for(j = 0,iSum = 0; j < iCol; j++)
                {
                    iSum = iSum + Arr[i][j];
                }
                System.out.println("Summation of all elements from row no"+i+"is :"+iSum);
                iSum = 0;
            }
        }

        public int DiagonalSum()
        {
            int i = 0, j = 0, iSum = 0;

            if(iRow != iCol)
            {
                System.out.println("Unable to perform addition of diagonal element");
                System.out.println("Bcause matrix is not a square matrix");

                return -1;
            }
            for(i= 0; i<iRow; i++)
            {
                for(j = i; (j < iCol && i ==j ); j++)   
                {
                    if(i == j)
                    {
                        iSum = iSum + Arr[i][j];
                    }
                }  
            }
            return iSum;
        }

        public void SumEvenOdd()
        {
            int i = 0, j = 0, iSumEven = 0, iSumOdd = 0;

            for(i= 0; i<iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    if((Arr[i][j] % 2) == 0)
                    {
                        iSumEven = iSumEven + Arr[i][j];
                    }
                    else 
                    {
                        iSumOdd = iSumOdd + Arr[i][j];
                    }
                }
            }
            System.out.println("Summation of even elements :"+iSumEven);
            System.out.println("Summation of odd elements :"+iSumOdd);
        }

        public void UpdateMatrix()
        {
            int i = 0, j = 0, iSumEven = 0, iSumOdd = 0;

            for(i= 0; i<iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    if((Arr[i][j] % 5) == 0)
                    {
                        Arr[i][j] = 0;
                    }  
                }
            }
        }

        public void UpdateMatrixEven()
        {
            int i = 0, j = 0, iSumEven = 0, iSumOdd = 0;

            for(i= 0; i<iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    if((Arr[i][j] % 2) != 0)
                    {
                        Arr[i][j] = Arr[i][j]+1;
                        //or Arr[i][j]++;    as pn lihu shakto
                    }  
                }
            }
        }

        public void AdditionDigits()
        {
            int i = 0, j = 0;
            int iNo = 0, iDigit = 0;
            int iSum = 0;

            System.out.println("updated array :");
            for(i= 0; i<iRow; i++)
            {
                for(j = 0; j < iCol; j++)
                {
                    iNo = Arr[i][j];

                    while(iNo != 0)
                    {
                        iDigit = iNo % 10;
                        iSum = iSum + iDigit;
                        iNo = iNo / 10;
                    }
                    Arr[i][j] = iSum;
                    iSum = 0;
                }
                
            }
        }

        public void SwapRow()   //imp 
        {
            int i = 0, j = 0;
            int temp = 0;

            for(i = 0; i < iRow-1; i = i+2)
            {
                for(j = 0; j < iCol; j++)
                {
                    temp = Arr[i][j];
                    Arr[i][j] = Arr[i+1][j];
                    Arr[i+1][j] = temp;
                }
            }
        }
}


class Program585
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rowns :");
        int No1 = sobj.nextInt();

        System.out.println("Enter number of coloumns :");
        int No2 = sobj.nextInt();

        Matrix mobj = new Matrix(No1,No2);

        mobj.Accept();
        mobj.Display();

        mobj.SwapRow();
        mobj.Display();

        mobj = null;

        System.gc();
    }    
}

/*
    78  56  34  98
    67  89  43  21
    43  67  98  55
    56  34  76  10

    67  89  43  21
    78  56  34  98
    56  34  76  10
    43  67  98  55
*/