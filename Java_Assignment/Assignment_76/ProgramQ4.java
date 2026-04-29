import java.util.*;

public class ProgramQ4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int budget = 0;
        int N = 0;
        int count = 0;

        System.out.println("Enter a budget amount : ");
        budget = sobj.nextInt();

        System.out.println("Enter number of items : ");
        N = sobj.nextInt();

        if(budget < 0 || N < 0)
        {
            System.out.println("Invaild input");
            return;
        }

        for(int i = 1;i <= N; i++)
        {
            System.out.println("Enter price of items " + i + ": ");
            int price = sobj.nextInt();

            if(price <= 0)
            {
                System.out.println("Invaild input");
                return;
            }

            if(budget >= price)
            {
                budget = budget - price;
                count++;
            }
            else
            {
                break;
            }
        }

        System.out.println("Items Purchased: "+count);
        System.out.println("Remaining Balance:"+budget);
    }
}
