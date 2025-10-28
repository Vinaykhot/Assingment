import java.util.Scanner;

class Recursive
{
    public static int isum = 0;
    private static int ivalue = 0;

    public Recursive(int iNo)
    {
        this.ivalue = iNo;
    }

    public static int Summation()
    {
        int iDigit = 0;
        
        while(ivalue != 0)
        {
            iDigit = ivalue % 10;
            isum += iDigit;
            ivalue = ivalue / 10;
            Summation();
        }
        
        return isum;
        
    }
}

class Ass42P2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int ivalue = 0,iret = 0;

        System.out.println("Enter the Number");
        ivalue = sobj.nextInt();

        Recursive robj = new Recursive(ivalue);
        iret = Recursive.Summation();

        System.out.println("Summation of value: "+iret);

       
    }
}