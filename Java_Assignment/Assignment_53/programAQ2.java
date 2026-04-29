///////////////////////////////////////////////////////////
//
//  File name : Assignement53Question2.java
//  Description : Write a java program which accept two two arrays from user and
//                display minimum element of each array.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 2 9 7 5 2 3

9 3 5 5

Output : 2 3

*/

import java.util.Scanner;

class MyArray
{
    public void MinArray(int arr1[], int arr2[]) 
    {
        int i = 0,iMin1 = 0,iMin2 = 0;

        iMin1 = arr1[0];
        iMin2 = arr2[0];

        for(i = 0; i < arr1.length;i++)
        {
            if(arr1[i] < iMin1)
            {
                iMin1 = arr1[i];
            }
            
        }

        for(i = 0; i < arr2.length;i++)
        {
            if(arr2[i] < iMin2)
            {
                iMin2 = arr2[i];
            }
        }

        System.out.println(iMin1 + " " + iMin2);
    }
}

public class programAQ2
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
        aobj.MinArray(arr1, arr2);

        sobj.close();
    }   
}