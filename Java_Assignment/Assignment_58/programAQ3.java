///////////////////////////////////////////////////////////
//
//  File name : Assignement58Question3.java
//  Description : Java program to input a string from user and reverse each
//                word of given string
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

import java.util.Scanner;

class ReverseEachWord
{   //ABC XY PQ
    String reverseWord(String inputString)
    {
        String result = "";
        String word = "";

        for(int i = 0; i < inputString.length(); i++)
        {
            char ch = inputString.charAt(i);

            if(ch != ' ')
            {
                word = word + ch;
            }
            else
            {
                // Reverse current word
                String rev = "";
                for(int j = word.length() - 1; j >= 0; j--)
                {
                    rev = rev + word.charAt(j);
                }

                result = result + rev + " ";
                word = "";
            }
        }    

        String rev = "";
        for(int j = word.length() - 1; j >= 0; j--)
        {
            rev = rev + word.charAt(j);
        }

        result = result + rev;

        return result;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enput String : ");
        String str = sc.nextLine();

        ReverseEachWord robj = new ReverseEachWord();
        
        System.out.println("Input String : "+str);
        
        System.out.println( "String with Reverese Word: "+ robj.reverseWord(str)); //reverseWord("ABC XY PQ")

        sc.close();
    }
}