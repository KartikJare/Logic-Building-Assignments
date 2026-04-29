import java.util.*;

public class ProgramQ5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int battery = 0;

        System.out.println("Enter battery percentage : ");
        battery = sobj.nextInt();

        if(battery < 0 || battery > 100)
        {
            System.out.println("Invaild input");
            return;
        }

        if(battery <= 5)
        {
            System.out.println("Status:Critical");
        }
        else if(battery <= 15)
        {
            System.out.println("Status:Low");
        }
        else
        {
            System.out.println("Status:Normal");
        }

        System.out.println("Battery Percentage: "+battery);
      
        sobj.close();
    }
}
