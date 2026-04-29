///////////////////////////////////////////////////////////
//
//  File name : Assignement58Question5.java
//  Description : Write Java program to Transpose a Matrix.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

import java.util.*;

public class TransposeMatrix
{
    public static void main(String args[])
    {
        int row, col;
        Scanner sc = new Scanner(System.in);

        System.out.print("Input number of rows: ");
        row = sc.nextInt();

        System.out.print("Input number of columns: ");
        col = sc.nextInt();

        int a[][] = new int[row][col];
        
        System.out.println("Enter elements of matrix a:");
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                System.out.print("Element [" + (i+1) + "," + (j+1) + "] ? ");
                a[i][j] = sc.nextInt();
            }
        }

        System.out.println("Matrix a:");
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                System.out.print(a[i][j] + "\t");
            }
            System.out.println();
        }

        System.out.println("::: Transpose Matrix :::");

        for(int i = 0; i < col; i++)
        {
            for(int j = 0; j < row; j++)
            {
                System.out.print(a[j][i] + "\t");
            }
            System.out.println();
        }

        sc.close();
    }
}



