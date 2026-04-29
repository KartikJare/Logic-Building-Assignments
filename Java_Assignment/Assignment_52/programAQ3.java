///////////////////////////////////////////////////////////
//
//  File name : Assignement52Question3.java
//  Description :Write Java program which accept two arrays from user and display
//                odd contents of each array.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 2 9 6 5 2 3
45 6 12 18 23 4

Output : 9 5 3
45 23

*/

import java.util.Scanner;

class MyArray
{
    public void DisplayOdd(int arr1[], int arr2[]) 
    {
        int i = 0;

        System.out.println("Element of frist array are : ");
        for(i = 0; i < arr1.length;i++)
        {
            if(arr1[i] % 2 != 0)
            {
                System.out.println(arr1[i] + "\t");
            }
            
        }

        System.out.println("Element of second array are : ");
        for(i = 0; i < arr2.length;i++)
        {
            if(arr2[i] % 2 != 0)
            {
                System.out.println(arr2[i] + "\t");
            }
        }
        
    }
}

public class programAQ3
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
        aobj.DisplayOdd(arr1, arr2);

        sobj.close();
    }   
}