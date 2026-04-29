///////////////////////////////////////////////////////////
//
//  File name : Assignement57Question2.java
//  Description : Given an array arr[] of n integers, construct a Product Array
//                prod[] (of same size) such that prod[i] is equal to the product of
//                all the elements of arr[] except arr[i]. Solve it without division operator and in O(n).
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////


// arr[] = {10, 3, 5, 6, 2}
// prod[] = {180, 600, 360, 300, 900}

class ProductArray
{
    public void productArray(int arr[],int n) 
    {
        int prod[] = new int[n];

        prod[0] = 1;

        for(int i = 1;i < n;i++)
        {
            prod[i] = prod[i - 1] * arr[i - 1];
        }

        int right = 1;
        for(int i = n - 1;i >= 0;i--)
        {
            prod[i] = prod[i] * right;
            right = right * arr[i];
        }

        for(int i = 0;i < n;i++)
        {
            System.out.print(prod[i] + " ");
        }
        System.out.println();
    }
}

public class programAQ2
{
    public static void main(String A[])
    {
        ProductArray pa = new ProductArray();
        
        int arr[] = {10, 3, 5, 6, 2};
        
        int n = arr.length;
        
        System.out.println("The product array is : ");
        
        pa.productArray(arr, n);
    }   
}