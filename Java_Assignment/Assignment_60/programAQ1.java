///////////////////////////////////////////////////////////
//
//  File name : Assignement60Question1.java
//  Description : Write java program to print below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

 **********
 ****  ****
 ***   ***
 **    **
 *     *
 *     *
 **    **
 ***   ***
 ****  ****
 **********


*/

public class programAQ1
{
    public static void main(String args[])
    {
        int n = 5;

        // Upper part
        for (int i = n; i >= 1; i--)
        {
            // Left stars
            for (int j = 1; j <= i; j++)
            {
            System.out.print("*");
            }

            // Spaces in middle
            int spaces = 2 * (n - i);
            for (int j = 1; j <= spaces; j++)
            {
                System.out.print(" ");
            }

            // Right stars
            for (int j = 1; j <= i; j++)
            {
                System.out.print("*");
            }

            System.out.println();
        }

        // Lower part
        for (int i = 1; i <= n; i++)
        {
            // Left stars
            for (int j = 1; j <= i; j++)
            {
                System.out.print("*");
            }

            // Spaces in middle
            int spaces = 2 * (n - i);
            for (int j = 1; j <= spaces; j++)
            {
                System.out.print(" ");
            }

            // Right stars
            for (int j = 1; j <= i; j++)
            {
                System.out.print("*");
            }

            System.out.println();
        }

    }
}