///////////////////////////////////////////////////////////
//
//  File name : Assignement53Question5.java
//  Description : Write a java program which accept two array from user and check
//                 whether that array and its elements are palindrome or not.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 11 252 387783 252 11
Output : TRUE

Input : 11 252 387783 77 11
Output : FALSE

Input : 11 252 786 252 11
Output : FALSE

Input : 11 252 786 253 11
Output : FALSE

*/

import java.util.Scanner;

class MyArray
{
    public boolean ChkPallindrome(int arr[]) 
    {
        int i = 0;
        int strat = 0, end = arr.length - 1;
        
        while (strat < end)
        {
            if(arr[strat] != arr[end])
            {
                return false;
            }
            strat++;
            end--;
        }

        for(i = 0; i < arr.length;i++)
        {
           if(!iSPalindromeNumber(arr[i]))
            {
                return false;
            }        
        }

        return true;
    }

    private boolean iSPalindromeNumber(int No)
    {
        int iNo = No;
        int rev = 0;

        while (No != 0)
        {
            rev = rev * 10 + (No % 10);
            No = No / 10;
        }

        return (iNo == rev);
    }
}

public class programAQ5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, i = 0;
        
        System.out.print("Enter size of array: ");
        iSize = sobj.nextInt();

        int arr[] = new int[iSize];

        System.out.println("Enter elements of array:");
        for(i = 0; i < iSize; i++)
        {
            arr[i] = sobj.nextInt();
        }

        MyArray aobj = new MyArray();
        
        boolean bRet = aobj.ChkPallindrome(arr);

        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

        sobj.close();
    }   
}