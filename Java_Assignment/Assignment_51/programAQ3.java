///////////////////////////////////////////////////////////
//
//  File name : Assignement51Question3.java
//  Description : Write a java program which accept matrix from user and return its
//                transpose matrix.The transpose of a given matrix is formed by
//                interchanging the rows and columns of a matrix.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

import java.util.Scanner;

class Matrix
{
    private int Arr[][];

    public Matrix(int A,int B)
    {
        Arr = new int [A][B];
    }

    public void Accept()
    {
        System.out.println("Please enter the elements of matrix");

        Scanner sobj = new Scanner(System.in);

        int i = 0, j = 0;

        for(i = 0;i < Arr.length;i++)
        {
            for(j = 0; j< Arr[i].length;j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are : ");

        int i = 0, j = 0;

        for(i = 0;i < Arr.length;i++)
        {
            for(j = 0; j< Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public void SwapRows()
    {
        int j = 0 ,i = 0, temp = 0;

        for(i = 0;i < Arr.length - 1;i+=2)
        {   
            for(j = 0;j < Arr[i].length;j++)
            {
                temp = Arr[i][j];
                Arr[i][j] = Arr[i + 1][j];
                Arr[i + 1][j] = temp;
            }
        }
    } 

    public void SwapColumns()
    {
        int j = 0 ,i = 0, temp = 0;

        for(j = 0;j < Arr[0].length - 1;j+=2)
        {   
            for(i = 0;i < Arr.length;i++)
            {
                temp = Arr[i][j];
                Arr[i][j] = Arr[i][j + 1];
                Arr[i][j + 1] = temp;
            }
        }
    } 

    public int[][] Transpose()
    {
        int i = 0, j = 0;

        int Trans[][] = new int[Arr[0].length][Arr.length];

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Trans[j][i] = Arr[i][j];
            }
        }

        return Trans;
    }

    public void DisplayTranspose(int Brr[][])
    {
        System.out.println("Transpose Matrix : ");

        int i = 0, j = 0;

        for(i = 0; i < Brr.length; i++)
        {
            for(j = 0; j < Brr[i].length; j++)
            {
                System.out.print(Brr[i][j]+"\t");
            }
            System.out.println();
        }
    }

}

public class programAQ3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of colums : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

        System.out.println("\nOriginal Matrix:");
        mobj.Display();

        // mobj.SwapRows();

        // System.out.println("\nMatrix after swapping rows:");
        // mobj.Display();

        // mobj.SwapColumns();

        // System.out.println("\nMatrix after swapping Columns:");
        // mobj.Display();

        int Ret[][] = mobj.Transpose();

        mobj.DisplayTranspose(Ret);

        sobj.close();
    }   
}