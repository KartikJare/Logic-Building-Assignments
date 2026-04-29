///////////////////////////////////////////////////////////
//
//  File name : Assignement54Question2.java
//  Description : Write java program which accept array from user and replace each
//                member with summation of its digit.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 89 687 56 549 87 9
Output : 17 21 11 18 15 9

*/

import java.util.Scanner;

class MyArray
{
    public void SumArray(int arr[]) 
    {
        int i = 0,No = 0,iSum = 0;

        for(i = 0; i < arr.length;i++)
        {
            No = arr[i];
            iSum = 0;

            while (No != 0)
            {
                iSum = iSum + (No % 10);
                No = No / 10;
            }

            arr[i] = iSum;
        }

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

        int arr[] = new int[iSize];

        System.out.println("Enter elements of first array:");
        for(i = 0; i < iSize; i++)
        {
            arr[i] = sobj.nextInt();
        }

        MyArray aobj = new MyArray();
        
        aobj.SumArray(arr);

        System.out.println("Array Sum is  : ");
        for(i = 0;i < iSize;i++)
        {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        
        sobj.close();
    }   
}