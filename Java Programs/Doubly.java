class node
{
    public int data;
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
        node temp = First;

        System.out.print("null");
        while(temp != null)
        {
            System.out.print("<=>"+temp.data+"|");
            temp = temp.next;
        }
        System.out.println("Null");
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

        newn = new node(No);

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
            newn.prev = temp;
        }
    }

    public void InsertAtPos(int No,int iPos)
    {
        if((iPos < 1) || (iPos > iCount+1))
        {
            return;
        }
        else if(iPos == 1)
        {
            InsertFirst(No);
        }
        else if(iPos == iCount+1)
        {
            InsertLast(No);
        }
        else
        {
            node temp = null;
            node newn = null;
            int i = 0;

            temp = First;

            for(i = 0; i<iPos-1; i++)
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

    public void DeleteFirst()
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

            iCount--;
        }
    }

    void DeleteLast()
    {
        node temp = null;

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
           temp = First;

           while(temp.next.next != null)
           {
                temp = temp.next;
           }
           temp.next = null;

            iCount--;
        }
    }

    public void DeleteAtPos(int iPos)
    {
        if((iPos < 1) || (iPos > iCount+1))
        {
            return;
        }
        else if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount+1)
        {
            DeleteLast();
        }
        else
        {
            node temp1 = null;
            node temp2 = null;
            int i = 0;

            temp1 = First;

            for(i = 0; i<iPos-1; i++)
            {
                temp1 = temp1.next;
            }
            
            temp2 = temp1.next;
            temp1.next = temp2.next;
            temp2.next.prev = temp1;

            iCount--;
        }
    }
}
class Doubly
{
    public static void main(String Arg[])
    {
        DoublyLL obj = new DoublyLL();
        int iRet = 0;

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements in LL are :"+iRet);

        obj.InsertLast(111);
        obj.InsertLast(121);
        obj.Display();

        obj.InsertAtPos(50,3);
        obj.Display();
    }
}