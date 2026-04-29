///////////////////////////////////////////////////////////
//
//  File name : Assignement54Question4.java
//  Description : Write java program which accept marks of N students from user
//                and display class of each student.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*
Less than 35 - Fail
Less than 50 - Pass class
Less than 60 - Second class
Less than 70 - First class
Greater than 70 - First class with Distinction
Input : 67.3 45.8 88.9 77.5 55.2
Output : 67.3 First class
45.8 Pass class
88.9 First class with Distinction
77.5 First class with Distinction
55.2 Second class

*/

import java.util.Scanner;

class MyArray
{
    public void Percentage(float arr[]) 
    {
        int i = 0;

        for(i = 0; i < arr.length;i++)
        {
            if(arr[i] < 35)
            {
                System.out.println(arr[i] + " Fail");
            }
            else if(arr[i] < 50)
            {
                System.out.println(arr[i] + " Pass class");
            }
            else if(arr[i] < 60)
            {
                System.out.println(arr[i] + " Second class");
            }
            else if(arr[i] < 70)
            {
                System.out.println(arr[i] + " First class");
            }
            else
            {
                System.out.println(arr[i] + " First class with Distinction");
            }
        }
    }
}

public class programAQ4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, i = 0;

        System.out.print("Enter number of students: ");
        iSize = sobj.nextInt();

        float arr[] = new float[iSize];

        System.out.println("Enter marks:");
        for(i = 0; i < iSize; i++)
        {
            arr[i] = sobj.nextFloat();
        }

        MyArray aobj = new MyArray();

        aobj.Percentage(arr);

        sobj.close();
    }   
}