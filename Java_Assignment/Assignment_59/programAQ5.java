///////////////////////////////////////////////////////////
//
//  File name : Assignement59Question4.java
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

*/

public class programAQ5
{
    public static void main(String args[])
    {
       int no = 5;

        int i = 0, j = 0;

        for(i = no;i >= 1;i--)
        {
            for(j = 1;j <= i;j++)
            {
                System.out.print("*");
            }
    
            for(j = 1; j <= no - i; j++)
            {
                System.out.print(" ");
            }

            for(j = 1; j <= i;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}