///////////////////////////////////////////////////////////
//
//  File name : Assignement59Question3.java
//  Description : Write java program to print below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

     * * * * *
      * * * *
       * * *
        * *
         *
*/

public class programAQ3
{
    public static void main(String args[])
    {
        int no = 5;

        int i = 0, j = 0;

        for(i = 1;i <= no;i++)
        {
            for(j = 1;j <= i - 1;j++)
            {
                System.out.print(" ");
            }

            for(j = 1; j <= no - i + 1;j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}