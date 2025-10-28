class Recursive
{
    public static char iCount = 'A';

    public static void Display()
    {
        System.out.print(iCount+"\t");
        iCount++;

        while(iCount <= 'F')
        {
            
            Recursive.Display();
        }
    }
}

class Ass40P4
{
    public static void main(String A[])
    {
        Recursive.Display();
    }
}