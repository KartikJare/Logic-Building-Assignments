///////////////////////////////////////////////////////////
//
//  File name : Assignement60Question3.java
//  Description : Write a java program which print Fibonacci series
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

import java.util.Scanner;

public class programAQ3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of terms: ");
        int no = sobj.nextInt();

        int a = 0, b = 1;

        System.out.println("Fibonacci Series:");

        for (int i = 1; i <= no; i++)
        {
            System.out.print(a + " ");

            int next = a + b;
            a = b;
            b = next;
        }

        sobj.close();
    }
}