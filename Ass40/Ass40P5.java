class Recursive
{
    public static char iCount = 'a';

    public static void Display()
    {
        System.out.print(iCount+"\t");
        iCount++;

        while(iCount <= 'f')
        {
            
            Recursive.Display();
        }
    }
}

class Ass40P5
{
    public static void main(String A[])
    {
        Recursive.Display();
    }
}