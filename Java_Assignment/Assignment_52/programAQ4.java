///////////////////////////////////////////////////////////
//
//  File name : Assignement52Question4.java
//  Description : Write Java program which accept two arrays from user and form
//                new array which is combination of contents of first and second array.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 12 57 28 3
        99 23 54 58 6 67

Output : 12 57 28 3 99 23 54 58 6 67

*/

import java.util.Scanner;

class MyArray
{
    public int [] ArrayConcate(int arr1[],int iSize1,int arr2[],int iSize2) 
    {
        int i = 0;

        int Brr[] = new int[iSize1 + iSize2];

        for(i = 0; i < iSize1;i++)
        {
            Brr[i] = arr1[i];            
        }

        for(i = 0; i < iSize2;i++)
        {
            Brr[iSize1 + i] = arr2[i];            
        }

        return Brr;
    }
}

public class programAQ4
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
        
        int iRet []= aobj.ArrayConcate(arr1,iSize1,arr2,iSize2);

        System.out.println("Concate array is : ");
        for(i = 0;i < iRet.length;i++)
        {
            System.out.print(iRet[i] + " ");
        }

        sobj.close();
    }   
}