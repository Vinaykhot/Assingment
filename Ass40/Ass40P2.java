class Recursive
{
    public static int iCount = 1;

    public static void Display()
    {
        System.out.print(iCount+"\t");
        iCount++;

        while(iCount <= 5)
        {
            
            Recursive.Display();
        }
    }
}

class Ass40P2
{
    public static void main(String A[])
    {
        Recursive.Display();
    }
}