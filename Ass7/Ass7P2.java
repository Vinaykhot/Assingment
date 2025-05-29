
import java.util.Scanner;

class Number
{
    int DollarToINR(int iNo)
    {
        int iconvert = 0;

        iconvert = iNo * 70;

        return iconvert;
    }
}

class Ass7P2
{
    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);
        int ivalue = 0,iret = 0;
        
        System.out.println("Enter Number :-");
        ivalue = sobj.nextInt();

        Number nobj= new Number();

        iret = nobj.DollarToINR(ivalue);

        System.out.println("Value in INR is :- "+iret);


    }
}