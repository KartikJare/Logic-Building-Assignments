import java.util.*;

public class ProgramQ1 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int TotalHours = 0;
        int amount = 0;

        System.out.println("Enter number of hours of parking :");
        TotalHours = sobj.nextInt();
        
        if(TotalHours < 0)
        {
            System.out.println("Invaild input");
            return;
        }

        if(TotalHours <= 2)
        {
            amount = 20;
        }
        else if(TotalHours > 2)
        {
            amount = 20 + (TotalHours -2 ) * 10;

        } 
        
        if(TotalHours > 10)
        {
            amount =  amount + 50;
        }   

        System.out.println("Total Parking Duration:"+TotalHours);
        System.out.println("Total Parking Fee:"+amount);

        sobj.close();
    }
}
