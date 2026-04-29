///////////////////////////////////////////////////////////
//
//  File name : Assignement58Question4.java
//  Description : Java program to read and add two distances using class
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

In this java program, we will read two distances in feet and inches and
find their sum, here program is implementing using class and objects
concept.
Given program is used to read two distances (in feet and inches) and
print their sum in feet and inches, note that if total inches are more than
12 then it would be consider as 1 feet.
Example:
Input:
Enter first distance:
Enter feet: 20
Enter inches: 10
Enter second distance:
Enter feet: 20
Enter inches: 10
Output:
Total distance is:
Feet: 41 Inches: 8

*/

import java.util.Scanner;

class Distance
{
    int feet;
    int inches;

    public void accept()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter feet: ");
        feet = sc.nextInt();

        System.out.print("Enter inches: ");
        inches = sc.nextInt();
    }

    public void display()
    {
        System.out.println("Feet: " + feet + " Inches: " + inches);
    }

    public static Distance addDistance(Distance d1, Distance d2)
    {
        Distance temp = new Distance();

        temp.inches = d1.inches + d2.inches;
        temp.feet = d1.feet + d2.feet;

        if(temp.inches >= 12)
        {
            temp.feet = temp.feet + (temp.inches / 12);
            temp.inches = temp.inches % 12;
        }
        
        return temp;
    }    
}

public class programAQ4
{
    public static void main(String A[])
    {
        Distance d1 = new Distance();
        Distance d2 = new Distance();

        System.out.println("Enter first distance:");
        d1.accept();

        System.out.println("Enter second distance:");
        d2.accept();

        Distance result = Distance.addDistance(d1, d2);

        System.out.println("Total distance is:");
        result.display();
        
    }
    
}