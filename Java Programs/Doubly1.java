
class node
{
    int data;
    public node next;
    public node prev;

    public node(int Value)
    {
        data = Value;
        next = null;
        prev = null;
    }
}

class DoublyLL
{
    public node First;
    public int iCount;

    public DoublyLL()
    {
        First = null;
        iCount = 0;
    }  

    public void Display()
    {
        node temp = null;
        temp = First;

        System.out.println("null");
        while(temp != null)
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int No)
    {
        node newn = null;
        newn = new node(No);

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

        temp = First;

        newn = new node(No);

        if(First == null)
        {
            First = newn;
        }
        else
        {
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
            newn.prev = temp;
        }
        iCount++;
    }

    public void InsertAtPos(int No, int iPos)
    {
        node newn = null;
        node temp = null;
        int i = 0;

        newn = new node(No);

        if((iPos < 1) || (iPos > iCount))
        {
            return;
        }
        if(iPos == 1)
        {
            InsertFirst(No);
        }
        else if(iPos == iCount+1)
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
            temp.next.prev = newn;
            newn.prev = temp;
            temp.next = newn;
            iCount++;
        }
    }

    void DeleteFirst()
    {
        if(First == null)
        {
            return;
        }
        else if(First.next == null)
        {
            First = null;
        }
        else
        {
            First = First.next;
            First.prev = null;
        }
    }

    void DeleteLast()
    {
        node temp = First;

        if(First == null)
        {
            return;
        }
        else if(First.next == null)
        {
            First = null;
        }
        else
        {
            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }
        iCount--;
    }

    void DeleteAtPos(int iPos)
    {
        node temp = null;
        int i = 0;

        if((iPos < 1) || (iPos > iCount))
        {
            return;
        }
        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount+1)
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
            temp.next.next.prev = temp;
            temp.next = temp.next.next;
        }
    }
}

class Doubly1
{
    public static void main(String Arg[])
    {
        DoublyLL obj = new DoublyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(121);
        obj.InsertLast(151);

        obj.Display();

        obj.DeleteAtPos(4);
        obj.Display();
    }
}