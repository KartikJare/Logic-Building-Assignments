///////////////////////////////////////////////////////////
//
//  File name : Assignement60Question4.java
//  Description : Java program to merge two files alternatively into third file
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

import java.io.*;

public class programAQ4
{
    public static void main(String args[])
    {
        String line1,line2;

        try
        {
            BufferedReader br1 = new BufferedReader(new FileReader("file1.txt"));
            BufferedReader br2 = new BufferedReader(new FileReader("file2.txt"));
            BufferedWriter bw = new BufferedWriter(new FileWriter("file3.txt"));


            // Read both files alternatively
            while (true)
            {
                line1 = br1.readLine();
                line2 = br2.readLine();

                if (line1 == null && line2 == null)
                {
                    break;
                }
                
                if (line1 != null)
                {
                    bw.write(line1);
                    bw.newLine();
                }

                if (line2 != null)
                {
                    bw.write(line2);
                    bw.newLine();
                }
            }

            br1.close();
            br2.close();
            bw.close();

            System.out.println("Files merged successfully into file3.txt");

        } 
        catch (IOException e)
        {
            System.out.println("Error: " + e.getMessage());
        }
    }
}