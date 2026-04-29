///////////////////////////////////////////////////////////
//
//  File name : Assignement53Question3.java
//  Description : Write a java program which accept two array from user and copy
//                the contents of that array into another array in reverse order and
//                 return new array.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

*/

import java.util.Scanner;

class MyArray
{
    public int [] CopyArrayRev(int arr[]) 
    {
        int i = 0;

        int Brr[] = new int[arr.length];

        for(i = 0; i < arr.length;i++)
        {
            Brr[i] = arr[arr.length - 1 - i];
        }

        return Brr;
    }
}

public class programAQ3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, i = 0;
        
        System.out.print("Enter size of  array: ");
        iSize = sobj.nextInt();

        int arr[] = new int[iSize];

        System.out.println("Enter elements of  array:");
        for(i = 0; i < iSize; i++)
        {
            arr[i] = sobj.nextInt();
        }

        MyArray aobj = new MyArray();
        
        int iRet [] = aobj.CopyArrayRev(arr);

        System.out.println("Element in reversed are :");
        for(i = 0; i < iRet.length;i++)
        {
            System.out.print(iRet[i] + "\t");

        }
        System.out.println();

        sobj.close();
    }   
}