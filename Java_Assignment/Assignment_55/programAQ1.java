///////////////////////////////////////////////////////////
//
//  File name : Assignement55Question1.java
//  Description : Write Java program which accept array of characters from user and
//                replace each capital character with its corresponding small character.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : b N j B R b A d G G
Output : b n j b r b a d g g

*/

import java.util.Scanner;

class MyArray
{
    public void ArrayReplace(char arr[]) 
    {
        int i = 0;

        for(i = 0; i < arr.length;i++)
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
            {
                arr[i] = (char)(arr[i] + 32);
            }

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

        char arr[] = new char[iSize];

        System.out.println("Enter elements of array:");
        for(i = 0; i < iSize; i++)
        {
            arr[i] = sobj.next().charAt(0);
        }

        MyArray aobj = new MyArray();
        
        aobj.ArrayReplace(arr);

        System.out.println("Array after changes : ");
        for(i =0;i < iSize;i++)
        {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        
        sobj.close();
    }   
}