///////////////////////////////////////////////////////////
//
//  File name : Assignement56Question2.java
//  Description : Write a java program which accept string from user and print frequency
//                of each word.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : India is Demo India Hello Demo
Output : India 2
is 1
Demo 2
Hello 1

*/

import java.util.Scanner;

class MyString
{
    public void Frequency(String str) 
    {
        int len = str.length();
        String words[] = new String[100];
        int iCount [] = new int[100];
        
        int i = 0,index = 0;

        while (i < len)
        {
            String word = "";

            while (i < len && str.charAt(i) == ' ')
            {
                i++;
            }

            while (i < len && str.charAt(i) != ' ')
            {
                word = word + str.charAt(i);
                i++;
            }

            if (word.length() > 0)
            {
                words[index] = word;
                iCount[index] = 1;
                index++;
            }

        }

        for(i = 0; i < index;i++)
        {
            if(iCount[i] == -1)
            {
                continue;
            }

            for(int j = i + 1;j < index;j++)
            {
                if(words[i].equals(words[j]))
                {
                    iCount[i]++;
                    iCount[j] = -1;
                }
            }
        }

        for(i = 0;i < index;i++)
        {
            if(iCount[i] != -1)
            {
                System.out.println(words[i] + " "+iCount[i]);
            }
        }
    }
}

public class programAQ2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter frist string : ");
        String s1 = sobj.nextLine();

        MyString aobj = new MyString();

        aobj.Frequency(s1);
        
        sobj.close();
    }   
}