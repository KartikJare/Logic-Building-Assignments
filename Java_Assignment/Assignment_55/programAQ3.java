///////////////////////////////////////////////////////////
//
//  File name : Assignement55Question3.java
//  Description : Write Java program which accept array of characters from user and
//                accept one character. Return occurrence of that character without considering case.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : b N e B R b A i G i B
b
Output : 4

*/

import java.util.Scanner;

class MyArray
{
    public int Search(char arr[],char ch) 
    {
        int i = 0,iCount = 0;

        ch = Character.toLowerCase(ch);

        for(i = 0; i < arr.length;i++)
        { 
            if(Character.toLowerCase(arr[i]) == ch)
            {
                iCount ++;
            }
        }
        return iCount;
    }
}

public class programAQ3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0,i = 0;
        
        System.out.print("Enter size of array: ");
        iSize = sobj.nextInt();

        char arr[] = new char[iSize];

        System.out.println("Enter elements of array:");
        for(i = 0; i < iSize; i++)
        {
            arr[i] = sobj.next().charAt(0);
        }

        System.out.print("Enter character to search: ");
        char ch = sobj.next().charAt(0);

        MyArray aobj = new MyArray();
        
        int iRet = aobj.Search(arr,ch);

        System.out.println("Number of occurrence :  "+iRet);

        sobj.close();
    }   
}