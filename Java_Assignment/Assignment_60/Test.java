///////////////////////////////////////////////////////////
//
//  File name : Assignement60Question4.java
//  Description : Java program to count the number of characters in a file
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////


import java.io.*;
public class Test
{
    public static void main(String[] args) throws IOException
    {
        File file = new File("Text.txt");
        
        FileInputStream fileStream = new FileInputStream(file);
        
        InputStreamReader input = new InputStreamReader(fileStream);
        
        BufferedReader reader = new BufferedReader(input);
        
        String line;

        int countWord = 0;
        int sentenceCount = 0;
        int characterCount = 0;
        int paragraphCount = 1;
        int whitespaceCount = 0;
        
        while ((line = reader.readLine()) != null)
        {
            // Count characters
            characterCount += line.length();

            // Count words
            String words[] = line.trim().split("\\s+");
            if (line.trim().length() > 0)
            {
                countWord += words.length;
            }

            // Count sentences and whitespaces
            for (int i = 0; i < line.length(); i++)
            {
                char ch = line.charAt(i);

                if (ch == '.' || ch == '!' || ch == '?')
                {
                    sentenceCount++;
                }

                if (ch == ' ')
                {
                    whitespaceCount++;
                }
            }
        }

        reader.close();
        
        
        System.out.println("Total word count = " + countWord);
        
        System.out.println("Total number of sentences = " +sentenceCount);
        
        System.out.println("Total number of characters = " +characterCount);
        
        System.out.println("Number of paragraphs = " + paragraphCount);
        
        System.out.println("Total number of whitespaces = " +whitespaceCount);
    }
}