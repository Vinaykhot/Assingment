import java.util.Scanner;

class Recursive
{
    private static char icnt = 'a';
    private static int i = 1;
    

    public static void Display(int iNo)
    {
        System.out.print(icnt+"\t");
        icnt++;
        i++; 
        if(i <= iNo)
        {
           
            Display(iNo);

        }

        
    }
}

class Ass41P5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int ivalue = 0;

        System.out.println("Enter the Number");
        ivalue = sobj.nextInt();

        
        Recursive.Display(ivalue);
    }
}