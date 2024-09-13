class Marvellous
{
    public int i,j;

    public Marvellous()
    {
        System.out.println("Inside constructor");
    }
    protected void finalize()
    {
        System.out.println("Inside finalize method");
    }
}

class ObjectDemo2
{
    public static void main (String Arg[])
    {
        Marvellous obj = new Marvellous();
        System.out.println(obj.hashCode());
        obj = null;
        System.gc();


    }
}