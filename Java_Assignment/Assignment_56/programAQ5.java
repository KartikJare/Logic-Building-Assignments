///////////////////////////////////////////////////////////
//
//  File name : Assignement56Question5.java
//  Description : Write a java program which accept expression from user. Check
//                whether the expression is balanced parenthesised or not. (Expression
//                 should contains only circular brackets.)
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : (a+(f-g)*2(a-d))
Output : True
Input : (a+(f-g)*2(a-d)
Output : False

*/

import java.util.Scanner;

class MyString
{
    public boolean CheckBalanced(String str) 
    {
        int iCount = 0;

        for(int i = 0;i < str.length();i++)
        {
            char ch = str.charAt(i);

            if(ch == '(')
            {
                iCount++;
            }
            else if(ch == ')')
            {
                iCount--;

                if (iCount < 0)
                {
                    return false;
                }
            }
        }

        if (iCount == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

public class programAQ5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter frist string : ");
        String s1 = sobj.nextLine();

        MyString aobj = new MyString();

        boolean bRet = aobj.CheckBalanced(s1);

        if(bRet == true)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
       
        sobj.close();
    }   
}