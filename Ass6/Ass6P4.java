import java.util.*;

class Number
{
    void Display(int iNo)
    {
        int icnt = 0;
        int imulti = 0;

        for(icnt = 1;icnt <= 10;icnt++)
        {
            imulti = iNo * icnt;
            System.out.println(imulti);
        }
    }
}
class Ass6P4
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