
import java.util.Scanner;
class Pattern
{
    public void MultipleDisplay(int iNo)
    {
        int icnt = 0;

        for(icnt = 1;icnt <= iNo;icnt++)
        {
            if((iNo % icnt ) == 0)
            {
                System.out.print(icnt+"\t");
            }
           
        }
    }
}
class Ass5P5
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);
        int ivalue = 0;

        System.out.println("Enter Number :-");
        ivalue = sobj.nextInt();

        Pattern pobj=new Pattern();

        pobj.MultipleDisplay(ivalue);
    }
}