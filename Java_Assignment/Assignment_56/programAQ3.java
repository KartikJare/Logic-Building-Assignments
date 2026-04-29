///////////////////////////////////////////////////////////
//
//  File name : Assignement56Question3.java
//  Description : Write a java program which accept string from user and display such a
//                word which occurs maximum number of times.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : India is Demo India Hello Demo India
Output : India

*/

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

class MyString
{
    public void MaxWords(String str) 
    {
        String arr[] = str.split(" ");

        HashMap<String,Integer> hobj = new HashMap<>();
        
        for(String word : arr)
        {
            if(hobj.containsKey(word))
            {
                hobj.put(word,hobj.get(word) + 1);
            }
            else
            {
                hobj.put(word,1);
            }
        }

        int iMax = 0;
        String MaxWord = "";

        for(Map.Entry<String,Integer> entry : hobj.entrySet())
        {
            if(entry.getValue() > iMax)
            {
                iMax = entry.getValue();
                MaxWord = entry.getKey();            
            }
        }

        System.out.println(MaxWord);
    }
}

public class programAQ3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter frist string : ");
        String s1 = sobj.nextLine();

        MyString aobj = new MyString();

        aobj.MaxWords(s1);
        
        sobj.close();
    }   
}