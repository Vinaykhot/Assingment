
import java.util.Scanner;

class Number
{
    void Display(int iNo)
    {
        int icnt = 0;

        for(icnt= 1;icnt <=iNo ; icnt++)
        {
            System.out.print("*\t");
            
        }

        for(icnt= 1;icnt <=iNo ; icnt++)
        {
            System.out.print("#\t");
            
        }
    }
}

class Ass7P1
{
    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);
        int ivalue = 0;
        
        System.out.println("Enter Number :-");
        ivalue = sobj.nextInt();

        Number nobj= new Number();

        nobj.Display(ivalue);


    }
}