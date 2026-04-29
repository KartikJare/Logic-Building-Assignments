import java.util.*;

public class ProgramQ2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int marks_percent = 0;
        int Attendance_percent = 0;
        int family_income = 0;

        System.out.println("Enter marks in percent :");
        marks_percent = sobj.nextInt();

        System.out.println("Enter Attendance in percent :");
        Attendance_percent = sobj.nextInt();

        System.out.println("Enter family income:");
        family_income = sobj.nextInt();

        if(marks_percent < 0 || marks_percent > 100 || Attendance_percent < 0 || Attendance_percent > 100)
        {
            System.out.println("Invaild input");
            return;
        } 

        if(family_income < 0)
        {
            System.out.println("Invaild input");
            return;
        }

        if(marks_percent < 80)
        {
            System.out.println("Scholarship Rejected: marks be more than 80%");
        }
        else if(Attendance_percent < 75)
        {
            System.out.println("Scholarship Rejected: Attendance must be more than 75%");
        }
        else if(family_income > 300000)
        {
            System.out.println("Scholarship Rejected: family income must be less than 3,00,000");
        }
        else
        {
            System.out.println("Scholarship Approved");
        }
    }   

}
