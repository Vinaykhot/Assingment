
import java.util.Scanner;

class Number
{
    int EvenFactorial(int iNo)
    {
       int icnt = 0,ifact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1;icnt <= iNo; icnt++)
    {
        if((icnt % 2) != 0)
        {
            ifact = ifact * icnt;
        }
        
    }
    return ifact;
    }
}

class Ass7P4
{
    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);
        int ivalue = 0,iret = 0;
        
        System.out.println("Enter Number :-");
        ivalue = sobj.nextInt();

        Number nobj= new Number();

        iret = nobj.EvenFactorial(ivalue);

        System.out.println("Even factorial is :- "+iret);


    }
}