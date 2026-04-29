///////////////////////////////////////////////////////////
//
//  File name : Assignement55Question2.java
//  Description : Write Java program which accept array of characters from user and
//                replace each capital character with its corresponding small character.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : b N e B R b A i G i
Output : 4

*/

import java.util.Scanner;

class MyArray
{
    public int ArrayCountVowels(char arr[]) 
    {
        int i = 0,iCount = 0;
        char ch = '\0';

        for(i = 0; i < arr.length;i++)
        { 
            ch = arr[i];

            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' &&
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
            )
            {
                iCount ++;
            }
        }

        return iCount;
    }
}

public class programAQ2
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

        MyArray aobj = new MyArray();
        
        int iRet = aobj.ArrayCountVowels(arr);

        System.out.println(iRet);

        sobj.close();
    }   
}