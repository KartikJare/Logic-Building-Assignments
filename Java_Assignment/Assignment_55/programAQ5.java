///////////////////////////////////////////////////////////
//
//  File name : Assignement55Question5.java
//  Description : Write Java program which accept array from user and display below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*
Input : 8 9 7 6 4 2 4
Output :

* * * * * * * *
* * * * * *
* * * *
* *
* * * *

*/

import java.util.Scanner;

class MyArray
{
    public void Pattern(int arr[]) 
    {
        int i = 0, j = 0;
        
        for(i = 0; i < arr.length;i++)
        {
            if(arr[i] % 2 == 0)
            {
                for(j = 1;j <= arr[i];j++)
                {
                    System.out.print("* ");
                }
                System.out.println();
            }
        }
    }
}

public class programAQ5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, i = 0;

        System.out.print("Enter size of array : ");
        iSize = sobj.nextInt();

        int arr[] = new int[iSize];

        System.out.println("Enter element:");
        for(i = 0; i < iSize; i++)
        {
            arr[i] = sobj.nextInt();
        }

        MyArray aobj = new MyArray();

        aobj.Pattern(arr);

        sobj.close();
    }   
}