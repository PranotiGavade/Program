
class Marvellous
{
    //public int i,j;

    public Marvellous()
    {
        System.out.println("Inside constructor\n");
    }
    public void finalize()
    {
        System.out.println("Inside finalize\n");
    }

}

class ObjectDemo5
{
    public static void main(String Arg[])
    {
        Marvellous obj = new Marvellous();
        System.out.println(obj.hashCode());
        obj = null;
        System.gc();
    }
}