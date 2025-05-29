import java.util.*;

class Number
{
    void Display(int iNo)
    {
        if((iNo < -9) || (iNo > 9))
        {
            System.out.println("Invalid input");

        }

        else if( iNo == 0)
        {
            System.out.println("Zero");
        }

        else if((iNo == 1) || (iNo == -1))
        {
            System.out.println("One");
        }

        else if((iNo == 2) || (iNo == -2))
        {
            System.out.println("Two");
        }

        else if((iNo == 3) || (iNo == -3))
        {
            System.out.println("Three");
        }

        else if((iNo == 4) || (iNo == -4))
        {
            System.out.println("Four");
        }

        else if((iNo == 5) || (iNo == -5))
        {
            System.out.println("Five");
        }

        else if((iNo == 6) || (iNo == -6))
        {
            System.out.println("Six");
        }
        else if((iNo == 7) || (iNo == -7))
        {
            System.out.println("Seven");
        }

        else if((iNo == 8) || (iNo == -8))
        {
            System.out.println("Eight");
        }

        else if((iNo == 9) || (iNo == -9))
        {
            System.out.println("Nine");
        }
        
        


    }
}

class Ass6P2
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