///////////////////////////////////////////////////////////
//
//  File name : Assignement53Question1.java
//  Description : Write a java program which accept two arrays from user and return
//                difference between summation of arrays.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 2 9 7 5 2 3
9 3 5 5

Output : 6

*/

import java.util.Scanner;

class MyArray
{
    public int DiffArray(int arr1[], int arr2[]) 
    {
        int i = 0,iSum1 = 0,iSum2 = 0;

        for(i = 0; i < arr1.length;i++)
        {
            iSum1 = iSum1 + arr1[i];
        }

        for(i = 0; i < arr2.length;i++)
        {
            iSum2 = iSum2 + arr2[i];
        }
        
        return (iSum1 - iSum2);
    }
}

public class programAQ1 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize1 = 0,iSize2 = 0, i = 0;
        
        System.out.print("Enter size of first array: ");
        iSize1 = sobj.nextInt();

        int arr1[] = new int[iSize1];

        System.out.println("Enter elements of first array:");
        for(i = 0; i < iSize1; i++)
        {
            arr1[i] = sobj.nextInt();
        }

        System.out.print("Enter size of second array: ");
        iSize2 = sobj.nextInt();

        int arr2[] = new int[iSize2];

        System.out.println("Enter elements of second array:");
        for(i = 0; i < iSize2; i++)
        {
            arr2[i] = sobj.nextInt();
        }

        MyArray aobj = new MyArray();
        
        int iRet = aobj.DiffArray(arr1, arr2);

        System.out.println("Difference between is : "+iRet);

        sobj.close();
    }   
}