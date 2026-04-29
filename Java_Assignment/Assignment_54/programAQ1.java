///////////////////////////////////////////////////////////
//
//  File name : Assignement54Question1.java
//  Description : Write java program which accept array from user and reverse each
//                number of that array.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 89 687 56 549 87 9
Output : 98 786 65 945 78 9

*/

import java.util.Scanner;

class MyArray
{
    public void ReverseArray(int arr[]) 
    {
        int i = 0,No = 0,rev = 0;

        for(i = 0; i < arr.length;i++)
        {
            No = arr[i];
            rev = 0;

            while (No != 0)
            {
                rev = rev * 10 + (No % 10);
                No = No / 10;
            }

            arr[i] = rev;
        }

    }
}

public class programAQ1 
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
        
        aobj.ReverseArray(arr);

        System.out.println("Array reversing : ");
        for(i =0;i < iSize;i++)
        {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        
        sobj.close();
    }   
}