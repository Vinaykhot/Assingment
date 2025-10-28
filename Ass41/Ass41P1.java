
import java.util.Scanner;

class Recursive
{
    private static int icnt = 1;
    public static void Display(int iNo)
    {
        System.out.print("*\t");

        icnt++;

        if(icnt <= iNo)
        {
            Display(iNo);
        }
    }
}

class Ass41P1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int ivalue = 0;

        System.out.println("Enter the Number: ");
        ivalue = sobj.nextInt();

        Recursive.Display(ivalue);
    }
}