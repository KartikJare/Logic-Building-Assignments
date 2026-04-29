///////////////////////////////////////////////////////////
//
//  File name : Assignement57Question5.java
//  Description : Pythagorean Triplet in an array
//                Given an array of integers, write a function that returns true if
//                there is a triplet (a, b, c) that satisfies a2 + b2 = c2.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Example:
Input: arr[] = {3, 1, 4, 6, 5}
Output: True
There is a Pythagorean triplet (3, 4, 5).
Input: arr[] = {10, 4, 6, 12, 5}
Output: False
There is no Pythagorean triplet.

*/

import java.util.*;

class PythagoreanTriplet
{
    static boolean isTriplet(int arr[], int n)
    {
        for(int i = 0;i < n;i++)
        {
            arr[i] = arr[i] * arr[i];
        }

        Arrays.sort(arr);

        for(int i = n -1;i >= 2;i--)
        {
            int left = 0;
            int right = i -1;

            while (left < right)
            {
                if(arr[left] + arr[right] == arr[i])
                {
                    return true;
                }
                else if(arr[left] + arr[right] < arr[i])
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        return false;
    }

    public static void main(String A[])
    {
        int ar[] = {3, 1, 4, 6, 5};
        int ar_size = ar.length;
        if(isTriplet(ar,ar_size)==true)
        {
            System.out.println("Yes");
        }    
        else
        {
            System.out.println("No");
        }
    }
}