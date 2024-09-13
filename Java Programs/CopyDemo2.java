import java.lang.Exception;

class Student implements Cloneable
{
    public String Name;
    public int Marks;
    public int Age;

    public Student(String str,int A, int B)
    {
        this.Name = str;
        this.Marks = A;
        this.Age = B;
    }
    public Object clone() throws  CloneNotSupportedException
    {
        return super.clone();
    }
}

class CopyDemo2
{
    public static void main(String Arg[])
    {
        try
        {
            Student sobj = new Student("Amit",87,24);
            System.out.println("Name of student is :"+sobj.Name);
            System.out.println("Marks of student is :"+sobj.Marks);
            System.out.println("Age of student is :"+sobj.Age);

            Student sobjx = (Student)sobj.clone();
            System.out.println("Name of student is :"+sobjx.Name);
            System.out.println("Marks of student is :"+sobjx.Marks);
            System.out.println("Age of student is :"+sobjx.Age);
        }
        catch(Exception obj)
        {}
    }
}