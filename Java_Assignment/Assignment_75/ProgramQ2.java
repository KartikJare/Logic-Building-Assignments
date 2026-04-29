import java.util.*;

public class ProgramQ2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your age : ");
        int age = sobj.nextInt();

        System.out.println("Enter monthly income :");
        int income = sobj.nextInt();

        System.out.println("Enter your credit score : ");
        int cscore = sobj.nextInt();

        System.out.println("Do you have any unpaid loan (Yes/NO) : ");
        String loan = sobj.next();

        if(age < 0 || income < 0 || cscore < 0)
        {
            System.out.println("Invaild input");
            return;
        }

        if((loan.equalsIgnoreCase("Yes") == false) &&
           (loan.equalsIgnoreCase("NO")== false))
        {
            System.out.println("Invaild input");
            return;
        }

        if(age < 21 || age > 60)
        {
            System.out.println("Loan Rejected: Age must between the age 21 to 60");
        }
        else if(income < 25000)
        {
            System.out.println("Loan Rejected: Monthly income musst be above 25000");   
        }
        else if(cscore < 700)
        {
            System.out.println("Loan Rejected: Credit score must br above 700");
        }
        else if(loan.equalsIgnoreCase("Yes"))
        {
            System.out.println("Loan Rejected: Must not have an existing unpaid loan");   
        }
        else
        {
            System.out.println("Loan Approved");
        }

        sobj.close();
    }
}
