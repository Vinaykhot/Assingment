
import java.util.Scanner;

class Number
{
    public void Num(int iNo)
    {
        if( iNo < 50)
        {
            System.out.println(iNo+"Small");
        }
        else if((iNo > 50) && (iNo < 100))
        {
            System.out.println(iNo+"Medium");

        }
        else
        {
            System.out.println(iNo+"Large");
        }
    }
}

class Ass6P1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int ivalue = 0;

        System.out.println("Enter the Number :- ");
        ivalue = sobj.nextInt();

        Number nobj=new Number();

        nobj.Num(ivalue);


    }
}