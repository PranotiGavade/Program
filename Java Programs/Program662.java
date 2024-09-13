import java.util.*;

class Employee
{
    public int EID;
    public String Ename;
    public String EAddress;
    public int ESalary;

    private static int Counter;

    static
    {
        Counter = 0;
    }

    public Employee(String B, String C, int D)
    {
        this.EID = ++Counter;
        this.Ename = B;
        this.EAddress = C;
        this.ESalary = D;
    }

    void DisplayInfo()
    {
        System.out.println(+EID"\t"+Ename+"\t" +Address"\t"+ESalary"\t");
    }
}

class MarvellousDBMS
{
    public LinkedList<Employee> lobj;

    public MarvellousDBMS()
    {
        System.out.println("Marvellous DBMS Started succesfully");
        lobj = new LinkedList<Employee>();
    }

    //Insert into Employee values(1,"Sagar","Pune",11000)
    public void InsertIntoTable(String name,String Address, int Salary)
    {
        Employee eobj = new Employee(name,Address,Salary);
        lobj.add(eobj);
    }

    //Select * from employee
    public void SelectStar()
    {
        System.out.println("Data from Employee database : ");

        System.out.println("\n-----------------------------------------");
        System.out.println("EID\tEName\t\tEaddress\t\tESalary");
        System.out.println("-----------------------------------------");
        for(Employee eref : lobj)
        {
            eref.DisplayInfo();
        }
        System.out.println("-----------------------------------------");
    }

    //select * from employee where Eid = 3;
    public void SelectSpecific(int ID)
    {
        System.out.println("Information of employee whos EID is :"+ID);

        for(Employee eref : lobj)
        {
            if(eref.EID == ID)
            {
                eref.DisplayInfo();
                break;
            }
        }
    }

    //select * from Employee where Ename = "Sagar"
    public void SelectSpecific(String Name)
    {
        System.out.println("Information of employee whos EID is :"+Name);

        for(Employee eref : lobj)
        {
            if(Name.equals(eref.Ename))
            {
                eref.DisplayInfo();
            }
        }
    }

    //delete from Employee where EID = 3;
    public void DeleteFrom(int ID)
    {
        int index = 0;
        boolean bFlag = false;

        for(Employee eref : lobj)
        {
            if(eref.EID == ID)
            {
                bFlag = true;
                break;
            }
            index++;
        }

        if(bFlag == false)
        {
            System.out.println("Unable to delete element from database as id is not present");
        }
        else
        {
            lobj.remove(index);
        }
    }

    //delete from Employee where EName = Sagar;
    public void DeleteFrom(String Name)
    {
        int index = 0;
        boolean bFlag = false;

        for(Employee eref : lobj)
        {
            if(Name.equals(eref.EName))
            {
                bFlag = true;
                break;
            }
            index++;
        }

        if(bFlag == false)
        {
            System.out.println("Unable to delete name from database as name  is not present");
        }
        else
        {
            lobj.remove(index);
        }
    }

    //select sum(ESalary) from Employee;
    public void AggregateSum()
    {
        int iSum = 0;

        for(Employee eref : lobj)
        {
            iSum = iSum + eref.ESalary;
        }

        System.out.println("Summation of salary :"+iSum);
    }

    //select Max(ESalary) from Employee;
    public void AggregateSum()
    {
        int iMax = 0;

        for(Employee eref : lobj)
        {
            if(eref.ESalary > iMax)
            {
                iMax = eref.ESalary;
            }
        }

        System.out.println("Maximum salary :"+iMax);
    }

    //select Min(ESalary) from Employee;
    public void AggregateSum()
    {
        int iMin = 0;

        for(Employee eref : lobj)
        {
            if(eref.ESalary < iMin)
            {
                iMin = eref.ESalary;
            }
        }

        System.out.println("Mainimum salary :"+iMin);
    }

    //select avg(ESalary) from Employee;
    public void AggregateAvg()
    {
        int iSum = 0;

        for(Employee eref : lobj)
        {
            iSum = iSum + eref.ESalary;
        }

        System.out.println("Summation of salary :"+(iSum/lobj.size()));
    }
}

class Program661
{
    public static void main(String Arg[])
    {
        System.out.println("--------Marvellous Database Management System--------");

        MarvellousDBMS mobj = new MarvellousDBMS();

        mobj.InsertIntoTable("Sagar Kulkarni","Karve Road Pune",11000);
        mobj.InsertIntoTable("Gaurav Sharma","SB Road Nasik",21000);
        mobj.InsertIntoTable("Chinmayee patil","LB road mumbai",20000);
        mobj.InsertIntoTable("Akash Sudame","FC road Satara",25000);
        mobj.InsertIntoTable("Mansi Joshi","Panchawati Nasik",12000);
       
       mobj.SelectStar();

       mobj.SelectSpecific(4);
       mobj.SelectSpecific("Chinmayee Patil");

       mobj.DeleteFrom(4);
       mobj.SelectStar();

       mobj.DeleteFrom(7);

      /mobj.DeleteFrom("Gaurav Sharma");
       mobj.SelectStar();

       mobj.AggregateSum();
    }
}