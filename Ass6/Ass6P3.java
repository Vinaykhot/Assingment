import java.util.*;

class Number
{
    void Display(int iNo)
    {
        int icnt = 0;
        int ifact =1;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        

        for(icnt = iNo;icnt >= 1;icnt--)
        {
           ifact = icnt * ifact;
           
        }
        System.out.println(ifact);
    }
}
class Ass6P3
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);
        int ivalue = 0;

        System.out.println("Enter number :- ");
        ivalue=sobj.nextInt();

        Number nobj = new Number();
        nobj.Display(ivalue);


        
    }
}