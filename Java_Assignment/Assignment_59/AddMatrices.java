///////////////////////////////////////////////////////////
//
//  File name : Assignement59Question1.java
//  Description : Write java program which Add Two Matrices.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

import java.util.*;

public class AddMatrices
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int irow = 0, icol = 0;

        System.out.print("Enter number of rows: ");
        irow = sobj.nextInt();

        System.out.print("Enter number of columns: ");
        icol = sobj.nextInt();

        int A[][] = new int[irow][icol];
        int B[][] = new int[irow][icol];
        int C[][] = new int[irow][icol];


        System.out.println("Enter elements of Matrix A:");
        for(int i = 0; i < irow; i++)
        {
            for(int j = 0; j < icol; j++)
            {
                System.out.print("A[" + i + "][" + j + "] = ");
                A[i][j] = sobj.nextInt();
            }
        }

        // Input Matrix B
        System.out.println("Enter elements of Matrix B:");
        for(int i = 0; i < irow; i++)
        {
            for(int j = 0; j < icol; j++)
            {
                System.out.print("B[" + i + "][" + j + "] = ");
                B[i][j] = sobj.nextInt();
            }
        }

        // Addition Logic
        for(int i = 0; i < irow; i++)
        {
            for(int j = 0; j < icol; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        // Display Result
        System.out.println("Resultant Matrix (A + B):");
        for(int i = 0; i < irow; i++)
        {
            for(int j = 0; j < icol; j++)
            {
                System.out.print(C[i][j] + "\t");
            }
            System.out.println();
        }

        sobj.close();
        
    }
}