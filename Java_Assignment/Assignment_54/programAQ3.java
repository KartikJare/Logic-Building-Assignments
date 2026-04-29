///////////////////////////////////////////////////////////
//
//  File name : Assignement54Question3.java
//  Description : Write java program which accept array of characters from user and
//                 count number of capital characters.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : b N j B R b A d G G
Output : 6

*/

import java.util.Scanner;

class MyArray
{
    public int ArrayCapital(char arr[]) 
    {
        int i = 0,Count = 0;

        for(i = 0; i < arr.length;i++)
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
            {
                Count++;
            }
        }

        return Count;
    }
}

public class programAQ3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0,i = 0;
        
        System.out.print("Enter size of array: ");
        iSize = sobj.nextInt();

        char arr[] = new char[iSize];

        System.out.println("Enter elements of first array:");
        for(i = 0; i < iSize; i++)
        {
            arr[i] = sobj.next().charAt(0);
        }

        MyArray aobj = new MyArray();
        
        int iRet = aobj.ArrayCapital(arr);

        System.out.println("Number of capital characters is : " + iRet);
        
        sobj.close();
    }   
}