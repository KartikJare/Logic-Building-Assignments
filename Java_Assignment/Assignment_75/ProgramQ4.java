import java.util.*;

public class ProgramQ4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int fine = 0;

        System.out.println("Helmet worn(Yes/No) : ");
        String helmet = sobj.next();
        
        System.out.println("License available (Yes/No) : ");
        String license = sobj.next();
                
        System.out.println("Overspeeding (Yes/No) : ");
        String speed = sobj.next();
        
        if(
            (helmet.equalsIgnoreCase("Yes") == false) && (helmet.equalsIgnoreCase("No")== false) ||
            (license.equalsIgnoreCase("Yes") == false) && (license.equalsIgnoreCase("No")== false) ||
            (speed.equalsIgnoreCase("Yes") == false)   && (speed.equalsIgnoreCase("No")== false) 
          )
        {
            System.out.println("Invaild input");
            return;
        }

        if(helmet.equalsIgnoreCase("No"))
        {
            fine = fine + 500;
        }
        else if(license.equalsIgnoreCase("No"))
        {
            fine = fine + 1000;
        }   
        
        if(speed.equalsIgnoreCase("Yes")) 
        {
            fine = fine + 1500;
        }

        System.out.println("Total Fine Amount:"+fine);

        sobj.close();
    }
}
