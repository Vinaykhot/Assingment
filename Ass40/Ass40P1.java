class Recursive
{
    public static int iCount = 1;

    public static void Display()
    {
        System.out.print("*\t");
        iCount++;

        while(iCount <= 5)
        {
            
            Recursive.Display();
        }
    }
}

class Ass40P1
{
    public static void main(String A[])
    {
        Recursive.Display();
    }
}