///////////////////////////////////////////////////////////
//
//  File name : Assignement46Question3.java
//  Description : Write Java program which accept number of rows and number of columns
//                from user and display below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*
Input : iRow = 3 iCol = 4
Output : 1 2 3 4
5 6 7 8
9 10 11 12

Program Layout :
*/

import java.util.Scanner;

class Pattern
{
    public void PatternX(int iRow,int iCol)
    {   
        int i = 0, j = 0,iCount = 1;

        for(i = 1;i <=iRow;i++)
        {
            for(j = 1;j <= iCol;j++)
            {
                System.out.print(iCount + "\t");
                iCount++;
            }
            System.out.println();
        }
    }
}

public class programAQ5
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