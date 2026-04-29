///////////////////////////////////////////////////////////
//
//  File name : Assignement58Question1.java
//  Description : java program to print pyramid of characters using class 
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Enter Number : 5
        A
      A B A
     A B C B A 
   A B C D C B A
  A B C D E D C B A

*/

import java.util.Scanner;

class Pattern2
{
    private int num;
    
    public void setNum(int num)
    {
        this.num=num;
    }
    
    public int getNum()
    {
        return this.num;
    }
    
    public void printAnswer()
    {
        int no = getNum();

        for(int i = 0;i < no;i++)
        {
            for(int k = 0;k < no - i - 1;k++)
            {
                System.out.print(" ");
            }
            
            for(int j = 0;j <= i;j++)
            {
                System.out.print((char)('A' + j) + " ");
            }

            for(int j = i -1;j >= 0;j--)
            {
                System.out.print((char)('A' + j) + " ");
            }
            System.out.println();
        }

    }
    
    public void inputNum()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Number : ");
        int num = sc.nextInt();
        setNum(num);
        sc.close();
    }
    public static void main(String[] ar)
    {
        Pattern2 ob = new Pattern2();
        ob.inputNum();
        ob.printAnswer();
    }


}