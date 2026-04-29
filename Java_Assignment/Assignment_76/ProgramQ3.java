import java.util.*;

public class ProgramQ3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int weight = 0;
        int amount = 0;

        System.out.println("Enter parcel wright in KG : ");
        weight = sobj.nextInt();

        if(weight > 0)
        {
            System.out.println("Invaild input");
            return;
        }

        if(weight <= 1)
        {
            amount = 50;
        }
        else if(weight <= 5)
        {
            amount = 50 + (weight -1) * 20;
        }
        else
        {
            amount = 150 + (weight - 5) * 30;
        }

        System.out.println("Parcel Weight KG : "+weight);
        System.out.println("Courier Charge:" + amount);

        sobj.close();
    }
}
