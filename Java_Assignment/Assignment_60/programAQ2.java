///////////////////////////////////////////////////////////
//
//  File name : Assignement60Question2.java
//  Description : Write Java program to multiply two matrices
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

import java.util.Scanner;

class MatrixMultiplication
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter rows and columns of first matrix: ");
        int row1 = sobj.nextInt();
        int col1 = sobj.nextInt();

        // Input rows and columns for second matrix
        System.out.print("Enter rows and columns of second matrix: ");
        int row2 = sobj.nextInt();
        int col2 = sobj.nextInt();

        // Check if multiplication is possible
        if (col1 != row2) {
            System.out.println("Matrix multiplication not possible.");
            return;
        }

        int A[][] = new int[row1][col1];
        int B[][] = new int[row2][col2];
        int result[][] = new int[row1][col2];

        // Input first matrix
        System.out.println("Enter elements of first matrix:");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                A[i][j] = sobj.nextInt();
            }
        }

        // Input second matrix
        System.out.println("Enter elements of second matrix:");
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < col2; j++) {
                B[i][j] = sobj.nextInt();
            }
        }

        // Matrix multiplication logic
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                result[i][j] = 0;
                for (int k = 0; k < col1; k++) {
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        // Display result
        System.out.println("Resultant Matrix:");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();
        }

        sobj.close();
    }
}