import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int i=0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        for(i = -iNo;i <= iNo ; i++)
        {
            System.out.print(i+"\t");
        }
        System.out.println();
    }
}
class Ass5P3
{

    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int ivalue = 0;
        

        System.out.println("Enter Number");
        ivalue =sobj.nextInt();

        
        Pattern pobj=new Pattern();
        pobj.Display(ivalue);
        
    }
}