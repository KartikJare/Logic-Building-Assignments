import java.util.*;

public class ProgramQ5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int income = 0;
        double tax = 0;

        System.out.println("Enter your income:");
        income = sobj.nextInt();

        if(income < 0)
        {
            System.out.println("Invaild input");
            return;
        }

        if(income <= 250000)
        {
            tax = 0;
        }
        else if(income <= 500000)
        {
            tax = (income - 250000)* 0.05;
        }
        else if(income <= 1000000)
        {
            tax = (250000* 0.05) + (income - 500000) *0.20;
        }
        else
        {
            tax = (250000* 0.05) + (500000 * 0.20) + (income - 1000000) *0.30;
        }

        System.out.println("Annual Income:"+income);
        System.out.println("Total Tax Payable:"+tax);

        sobj.close();
    }
}
