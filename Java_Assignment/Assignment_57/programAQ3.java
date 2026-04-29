///////////////////////////////////////////////////////////
//
//  File name : Assignement57Question3.java
//  Description : Segregate Even and Odd numbers
//                Given an array A[], write a function that segregates even and odd
//                numbers. The functions should put all even numbers first, and then odd numbers.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Example
Input = {12, 34, 45, 9, 8, 90, 3}
Output = {12, 34, 8, 90, 45, 9, 3}

*/

class SegregateOddEven
{
    public void segregateOddEven(int arr[]) 
    {
        int left = 0;
        int right = arr.length - 1;

        while (left < right)
        {
            while (left < right && arr[left] % 2 == 0)
            {
                left++;   
            }

            while (left < right && arr[right] % 2 != 0)
            {
                right--;    
            }

            if(left < right)
            {
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;

                left++;
                right--;
            }
        }
    }
}

public class programAQ3
{
    public static void main(String A[])
    {
        int arr[] = {12, 34, 45, 9, 8, 90, 3};
        
        SegregateOddEven sobj = new SegregateOddEven();

        sobj.segregateOddEven(arr);
        
        System.out.print("Array after segregation ");
        
        for (int i = 0; i < arr.length; i++)
        {
            System.out.print(arr[i]+" ");
        }   
        System.out.println();
    }   
}