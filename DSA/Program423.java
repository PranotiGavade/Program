class node
{
    public int data;
    public node next;

    public node(int Value)
    {
        data = Value;
        next = null;
    }
}

class SinglyCL
{
    public node First;
    public node Last;

    public int iCount;

    public SinglyCL()
    {
        First = null;
        Last = null;
        iCount = 0;
    }

    public void InsertFirst(int No)
    {
        node newn = null;

        newn = new node(No);

        if(First == null && Last == null)
        {
            First = newn;
            Last = newn;
        }
        else
        {
            newn.next = First;
            First = newn;
            Last.next = First;
        }
        iCount++;
    }

    public void InsertLast(int No)
    {
        node newn = null;

        newn = new node(No);

        if(First == null && Last == null)
        {
            First = newn;
            Last = newn;
        }
        else 
        {
            Last.next = newn;
            Last = newn;
        }
        Last.next = First;
        iCount++;
    }

    public void DeleteFirst()
    {
        if(First == null && Last == null)
        {
            System.out.println("Unable to delete as LL is empty\n");
            return;
        }
        else if(First == Last)
        {
            First = null;
            Last = null;
        }
        else
        {
            First = First.next;
            Last.next = First;
        }
        iCount--;
    }

    public void DeleteLast()
    {
        node temp = null;
        if(First == null && Last == null)
        {
            System.out.println("Unable to delete as LL is empty\n");
            return;
        }
        else if(First == Last)
        {
            First = null;
            Last = null;
        }
        else
        {
            temp = First;

            while(temp.next != Last)
            {
                temp = temp.next;
            }
            temp.next = First;
            Last.next = First;
        }
        iCount--;
    }

    public void DeleteAtPos(int iPos)
    {
        if((iPos < 1) || (iPos > iCount))
        {
            System.out.println("Invalid position\n");
            return;
        }
        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount)
        {
            DeleteLast();
        }
        else
        {
            node temp1 = null;
            node temp2 = null;

            int i = 0;

            temp1 = First;

            for(i =1 ; i<iPos-1; i++)
            {
                temp1 = temp1.next;
            }
            temp2 = temp1.next;
            temp1.next = temp2.next;
            
        }
        iCount++;
    }

    public void InsertAtPos(int No,int iPos)
    {
        if((iPos < 1) || (iPos > iCount+1))
        {
            System.out.println("Invalid position\n");
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
        {
            node newn = new node(No);
            node temp = null;

            int i = 0;
            temp = First;
            for(i =1 ; i<iPos-1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;
        }
        iCount++;
    }

    public void Display()
    {
        if(First == null && Last == null)
        {
            return;
        }
        
        do
        {
            System.out.print("|->"+First.data+" |->");
            First = First.next;
        }while(First != Last.next);
        System.out.println("\n");
    }

    public int Count()
    {
        int iCnt = 0;

        do
        {
            iCnt++;
            First = First.next;
        }while(First != Last.next);

        return iCnt;
    }
}

class Program423
{
    public static void main(String Arg[])
    {
        SinglyCL obj = new SinglyCL();
        int iRet = 0;

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are :"+iRet);

        obj.InsertAtPos(105,5);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are :"+iRet);

        obj.DeleteAtPos(5);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of elements are :"+iRet);
    }
}