///////////////////////////////////////////////////////////
//
//  File name : Assignement57Question1.java
//  Description : Write a java program to find Maximum difference between two
//                elements such that larger element appears after the smaller number
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Examples:

If array is [2, 3, 10, 6, 4, 8, 1] then returned value should be 8 (Diff
between 10 and 2).

If array is [ 7, 9, 5, 6, 3, 2 ] then returned value should be 2 (Diff
between 7 and 9)

*/

class MaximumDiffrence
{
    int maxDiff(int arr[], int arr_size)
    {
        int iMin = arr[0];
        int imax_diff = arr[1] - arr[0];

        for(int i = 1;i < arr_size;i++)
        {
            if(arr[i] - iMin > imax_diff)
            {
                imax_diff = arr[i] - iMin;
            }

            if(arr[i] < iMin)
            {
                iMin = arr[i];
            }
        }
        return imax_diff;        
    }    
}

public class programAQ1 
{
    public static void main(String A[])
    {
        MaximumDiffrence maxdif = new MaximumDiffrence();
        
        int arr[] = {1, 2, 90, 10, 110};
        
        System.out.println("Maximum differnce is " +maxdif.maxDiff(arr,5));
    }   
}