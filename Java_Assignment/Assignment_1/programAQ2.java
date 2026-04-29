///////////////////////////////////////////////////////////
//
//  File name : Assigment1Question2.java
//  Descreption : Used to print 5 times"Marvellous" on screen
//  Author : Kartik Ganesh Jare
//  Date : 31/05/25
//  
///////////////////////////////////////////////////////////

class Display
{
    public void Display()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 5; iCnt++)
        {
            System.out.println("Marvellous");
        }    
    }
}

class programAQ2
{
    public static void main(String A[])
    {
        Display dobj = new Display();
        dobj.Display();
    }
}