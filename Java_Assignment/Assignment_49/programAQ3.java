///////////////////////////////////////////////////////////
//
//  File name : Assignement49Question3.java
//  Description : Write Java program which accept String from user and display
//                 below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*
Input : Hello
Output : 
H # # # #
H e # # #
H e l # #
H e l l #
H e l l o

Program Layout :
*/

import java.util.Scanner;

class Pattern
{
    public void PatternX(String str)
    {
        int i = 0,j = 0;

        for(i = 1;i < str.length();i++)
        {        
            for(j = 0;j < str.length();j++)
            {
                if(j < i)
                {
                    System.out.print(str.charAt(j) + "\t");
                }
                else
                {
                    System.out.print("#\t");
                }    
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
        String str = "";

        System.out.println("Enter String: ");
        str = sobj.nextLine();

        Pattern pobj = new Pattern();

        pobj.PatternX(str);

        sobj.close();
    }   
}