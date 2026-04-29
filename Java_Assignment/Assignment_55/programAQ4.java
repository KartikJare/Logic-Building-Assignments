///////////////////////////////////////////////////////////
//
//  File name : Assignement55Question4.java
//  Description : Write Java program which accept array of characters from user and
//                return difference between frequency of capital and frequency of small characters.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*
Input : b N e B R b A I O G i
Output : 3 (7 - 4)

*/

import java.util.Scanner;

class MyArray
{
    public int Diffrence(char arr[]) 
    {
        int i = 0;
        int iCap = 0,iSmall = 0;
        
        for(i = 0; i < arr.length;i++)
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
            {
                iCap++;
            }
            else if(arr[i] >= 'a' && arr[i] <= 'z')
            {
                iSmall++;
            }
        }

        return (iCap - iSmall);
    }
}

public class programAQ4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, i = 0;

        System.out.print("Enter size of array : ");
        iSize = sobj.nextInt();

        char arr[] = new char[iSize];

        System.out.println("Enter element:");
        for(i = 0; i < iSize; i++)
        {
            arr[i] = sobj.next().charAt(0);
        }

        MyArray aobj = new MyArray();

        int iRet = aobj.Diffrence(arr);

        System.out.println("Difference is : " + iRet);

        sobj.close();
    }   
}