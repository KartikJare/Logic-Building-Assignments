///////////////////////////////////////////////////////////
//
//  File name : Assignement56Question1.java
//  Description : Write a java program which accept two strings from user and check
//                whether first string is the rotation of second string or not
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : abcdefg cdefgab
Output : True

*/

import java.util.Scanner;

class MyString
{
    public boolean Rotation(String str1,String str2) 
    {
        int no1 = str1.length();
        int no2 = str2.length();

       if(no1 != no2)
       {
        return false;
       }

       char arr1[] = str1.toCharArray();
       char arr2[] = str2.toCharArray();

       for(int i = 0;i < no2;i++)
       {
            boolean bFlag = true;

            for(int j = 0;j < no1 ; j++)
            {
                if(arr1[j] != arr2[(i + j) % no2])
                {
                    bFlag = false;
                    break;
                }
            }

            if(bFlag == true)
            {
                return true;
            }
       }
       return false;
    }
}

public class programAQ1 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter frist string : ");
        String s1 = sobj.nextLine();

        System.out.println("Enter second string : ");
        String s2 = sobj.nextLine();
        
        MyString aobj = new MyString();

        boolean bRet = aobj.Rotation(s1, s2);

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