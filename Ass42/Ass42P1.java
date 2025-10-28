import java.util.Scanner;

class Recursive
{
    private static int icnt = 1;

    public Recursive(int iNo) 
    {
        this.icnt = iNo;
    }

    

    public static void Display()
    {
        System.out.print(icnt+"\t");
        icnt--;
        System.out.print("*\t");

        if(icnt >= 1)
        {
            
            Display();
        }
    }
}

class Ass42P1
{
    public static void main(String A[])
    {
         Scanner sobj = new Scanner(System.in);

        int ivalue = 0;

        System.out.println("Enter the Number");
        ivalue = sobj.nextInt();

        Recursive robj = new Recursive(ivalue);
        Recursive.Display();
    }
}