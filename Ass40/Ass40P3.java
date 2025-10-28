class Recursive
{
    public static int iCount = 5;

    public static void Display()
    {
        System.out.print(iCount+"\t");
        iCount--;

        while(iCount >= 1)
        {
            
            Recursive.Display();
        }
    }
}

class Ass40P3
{
    public static void main(String A[])
    {
        Recursive.Display();
    }
}