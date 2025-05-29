
import java.util.Scanner;

class Number
{
    int FactorialDiff(int iNo)
    {
       int icnt = 0,iEfact = 1,iOfact = 1,idiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1;icnt <= iNo; icnt++)
    {
        if((icnt % 2) != 0)
        {
            iOfact = iOfact * icnt;
        }

        if((icnt % 2) == 0)
        {
            iEfact = iEfact * icnt;
        }
        
    }

    idiff = iEfact - iOfact;
    return idiff;
    }
}

class Ass7P5
{
    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);
        int ivalue = 0,iret = 0;
        
        System.out.println("Enter Number :-");
        ivalue = sobj.nextInt();

        Number nobj= new Number();

        iret = nobj.FactorialDiff(ivalue);

        System.out.println("factorial Difference is :- "+iret);


    }
}