class node
{
    public int data;
    public node next;
}

class SinglyLL
{
    public node First;
    public int iCount;

    public SinglyLL()
    {
        First = null;
        iCount = 0;
    }
    public void Display()
    {
        node temp = null;
        temp = First;
        while(temp != null)
        {
            System.out.print("| "+temp.data+" |->");
            temp = temp.next;
        }
        System.out.println("null");
    }
    public void InsertFirst(int No)
    {
        node newn = null;

        newn = new node();

        newn.data = No;
        newn.next = null;

        if(First == null)
        {
            First = newn;
        }
        else
        {
            newn.next = First;
            First = newn;
        }
        iCount++;
    }

    public void InsertLast(int No)
    {
        node newn = null;
        node temp = null;
        newn = new node();

        newn.data = No;
        newn.next = null;

        if(First == null)
        {
            First = newn;
        }
        else
        {
           temp = First;

           while(temp.next != null)
           {
                temp = temp.next;
           }
           temp.next = newn;
        }
        iCount++;
    }

    public void InsertAtPos(int No,int iPos)
    {
        node temp = null;
        node newn = new node();

            newn.data = No;
            newn.next = null;

        int i = 0;

        if((iPos < 1) || (iPos > iCount+1))
        {
            return;
        }
        if(iPos == 1)
        {
            InsertFirst(No);
        }
        if(iPos == iCount+1)
        {
            InsertLast(No);
        }
        else
        {
            temp = First;

            for(i = 1; i<iPos-1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;

            iCount++;
        }
    }
    public void DeleteFirst()
    {
        if(First == null)
        {
            return;
        }
        else
        {
            First = First.next;
        }
        iCount--;
    }

    public void DeleteLast()
    {
        node temp = null;

        if(First == null)
        {
            return;
        }
        else
        {
            temp = First;
            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }
        iCount--;
    }

     public void DeleteAtPos(int iPos)
    {
        node temp = null;
        node temp2 = null;

        int i = 0;

        if((iPos < 1) || (iPos > iCount))
        {
            return;
        }
        if(iPos == 1)
        {
            DeleteFirst();
        }
        if(iPos == iCount+1)
        {
            DeleteLast();
        }
        else
        {
            temp = First;

            for(i = 1; i<iPos-1; i++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;
        }
        iCount--;
    }
}
class dsa23
{
    public static void main(String Arg[])
    {
        SinglyLL obj = new SinglyLL();
        int iRet = 0;

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);

        obj.Display();

        obj.InsertAtPos(105,5);
        obj.Display();

        obj.DeleteAtPos(5);
        obj.Display();
    }
}