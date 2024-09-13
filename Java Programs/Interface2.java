interface Circle
{
    float Radius = 10.5f;
    float PI = 3.14f;

    float Area();
    float Circumfarance();
}

class Marvellous implements Circle
{
   public float Area()
   {
    return PI * Radius * Radius;
   }
   public float Circumfarance()
   {
    return 2 * PI * Radius;
   }
}

class Interface2
{
    public static void main (String Arg[])
    {
        Marvellous mobj = new Marvellous();

        System.out.println("Area of circle is :"+mobj.Area());
        System.out.println("Circumfarance of circle is :"+mobj.Circumfarance());

        System.out.println("Values of radius is :"+Circle.Radius);
        System.out.println("Value of PI is :"+Circle.PI);
    }
}