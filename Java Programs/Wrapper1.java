class Wrapper1
{
    public static void main(String Arg[])
    {
        Integer iobj = new Integer(21);
        int No = 21;
        Integer i = No;  //Auto boxing

        int j = iobj.intValue();   //unboxing

        System.out.println(j);
        

    }
}