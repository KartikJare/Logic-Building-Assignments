///////////////////////////////////////////////////////////
//
//  File name : Assignement47Question3.java
//  Description : Write Java program which accept number of rows and number of columns
//                from user and display below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*
Input : iRow = 3 iCol = 5
Output : 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

Program Layout :
*/

import java.util.Scanner;

class Pattern
{
    public void PatternX(int iRow,int iCol)
    {   
        int i = 0, j = 0;

        for(i = 1;i <=iRow;i++)
        {
            for(j = iCol;j >= 1 ;j--)
            {
                System.out.print(j + "\t");
            }
            System.out.println();
        }
    }
}

public class programAQ3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of Row: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of Columns: ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.PatternX(iValue1, iValue2);

        sobj.close();
    }   
}