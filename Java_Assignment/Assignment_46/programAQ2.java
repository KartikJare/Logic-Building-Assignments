///////////////////////////////////////////////////////////
//
//  File name : Assignement46Question2.java
//  Description : Write Java program which accept number of rows and number of columns
//                from user and display below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*
Input : iRow = 4 iCol = 4
Output : A B C D
a b c d
A B C D
a b c d

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
            for(j = 1;j <= iCol;j++)
            {
                if((i % 2) != 0)
                {
                    System.out.print((char)(96 + j) + "\t"); 
                }
                else
                {
                    System.out.print((char)(64 + j) + "\t");
                }
            }
            System.out.println();
        }
    }
}

public class programAQ2
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