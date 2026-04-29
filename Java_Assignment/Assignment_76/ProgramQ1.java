import java.util.*;

public class ProgramQ1 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Distance  = 0;
        double fare = 0;

        System.out.println("Enter distance in (Km) : ");
        Distance = sobj.nextInt();

        System.out.println("Enter it is peak hours or not (YES/NO) :");
        String peak = sobj.next();
        
        if(Distance < 0)
        {
            System.out.println("Invaild input");
            return;
        }

        fare = 50;

        if(Distance <= 10)
        {
            fare = fare + (Distance * 12);
        }
        else
        {
            fare = fare + (10 * 12) + ((Distance - 10) * 15);
        }

        if(peak.equalsIgnoreCase("Yes"))
        {
            fare = fare + (fare * 0.20);
        }

        System.out.println("Distance KM :"+Distance);
        System.out.println("Peak Hour:"+peak);
        System.out.println("Total Fare:"+fare);
    }
}
