///////////////////////////////////////////////////////////
//
//  File name : Assignement58Question2.java
//  Description : Program to check given strings are Anagram or not
//                This java program will read two strings and check whether they
//                are anagram strings or not.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////


import java.util.Arrays;
import java.util.Scanner;

class AnagramString
{
    static boolean isAnagrams(String str1,String str2)
    {
        if(str1.length() != str2.length())
        {
            return false;
        }

        char arr1[] = str1.toCharArray();
        char arr2[] = str2.toCharArray();

        Arrays.sort(arr1);
        Arrays.sort(arr2);

        for(int i = 0; i < arr1.length; i++)
        {
            if(arr1[i] != arr2[i])
            {
                return false;
            }
        }

        return true;
    }
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter String1 : ");
        String str1 = sc.next();
        
        System.out.println("Enter String2 : ");
        String str2 = sc.next();
        
        if(isAnagrams(str1,str2))
        {
            System.out.println("Anagram Strings !!");
        }
        else
        {
            System.out.println("Strings are not Anagram !!");
        }

        sc.close();
    }
}