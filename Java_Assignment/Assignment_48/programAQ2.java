///////////////////////////////////////////////////////////
//
//  File name : Assignement48Question2.java
//  Description : Write Java program which accept String from user and display
//                 below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*
Input : Hello
Output : 
H e l l o
H e l l
H e l
H e
H
Program Layout :

*/

import java.util.Scanner;

class Pattern
{
    public void PatternX(String str)
    {
        int i = 0,j = 0;

        for(i = str.length();i >= 1;i--)
        {        
            for(j = 0;j < i;j++)
            {
                System.out.print(str.charAt(j) + "\t");
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
        String str = "";

        System.out.println("Enter String: ");
        str = sobj.nextLine();

        Pattern pobj = new Pattern();

        pobj.PatternX(str);

        sobj.close();
    }   
}