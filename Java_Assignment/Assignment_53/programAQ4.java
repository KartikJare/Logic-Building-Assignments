///////////////////////////////////////////////////////////
//
//  File name : Assignement53Question4.java
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
    public int [] CopyArray(int arr[]) 
    {
        int i = 0;

        int Brr[] = new int[arr.length];

        for(i = 0; i < arr.length;i++)
        {
            Brr[i] = arr[i];
        }

        return Brr;
    }
}

public class programAQ4
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
        
        int iRet [] = aobj.CopyArray(arr);

        System.out.println("Copy Element are :");
        for(i = 0; i < iRet.length;i++)
        {
            System.out.print(iRet[i] + "\t");

        }
        System.out.println();

        sobj.close();
    }   
}