///////////////////////////////////////////////////////////
//
//  File name : Assignement56Question4.java
//  Description : Write a java program which accept string and one character from user
//                and remove that character from string.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : IndiaisDemoIndia

i

Output : IndasDemoInda

*/

import java.util.Scanner;

class MyString
{
    public String Removechar(String str,char ch) 
    {
        String sResult = "";

        for(int i = 0;i < str.length();i++)
        {
            if(str.charAt(i) != ch)
            {
                sResult = sResult + str.charAt(i);
            }
        }

        return sResult;
    }
}

public class programAQ4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter frist string : ");
        String s1 = sobj.nextLine();

        System.out.println("Enter character : ");
        char ch = sobj.next().charAt(0);

        MyString aobj = new MyString();

        String sRet = aobj.Removechar(s1,ch);

        System.out.println(sRet);

        sobj.close();
    }   
}