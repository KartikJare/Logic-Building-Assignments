///////////////////////////////////////////////////////////
//
//  File name : Assignement57Question4.java
//  Description : Equilibrium index of an array
//                Write a function int equilibrium(int[] arr, int n); that given a sequence
//                arr[] of size n, returns an equilibrium index (if any) or -1 if no equilibrium
//                indexes exist.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Equilibrium index of an array is an index such that the sum of
elements at lower indexes is equal to the sum of elements at
higher indexes. For example, in an arrya A:
A[0] = -7, A[1] = 1, A[2] = 5, A[3] = 2, A[4] = -4, A[5] = 3, A[6]=0
3 is an equilibrium index, because:
A[0] + A[1] + A[2] = A[4] + A[5] + A[6]
6 is also an equilibrium index, because sum of zero elements is zero, i.e.,
A[0] + A[1] + A[2] + A[3] + A[4] + A[5]=0
7 is not an equilibrium index, because it is not a valid index of array A.


*/

class EquilibriumIndex
{
    int equilibrium(int arr[], int n)
    {
        int total = 0;

        for(int i = 0; i < n; i++)
        {
            total = total + arr[i];
        }

        int left_sum = 0;

        for(int i = 0; i < n; i++)
        {
            total = total - arr[i];

            if(left_sum == total)
            {
                return i;   
            }

            left_sum = left_sum + arr[i];
        }

        return -1; 
    }

    public static void main(String A[])
    {
        EquilibriumIndex equi = new EquilibriumIndex();

        int arr[] = {-7, 1, 5, 2, -4, 3, 0};
        int arr_size = arr.length;

        System.out.println("First equilibrium index is " + equi.equilibrium(arr, arr_size));
    }
}